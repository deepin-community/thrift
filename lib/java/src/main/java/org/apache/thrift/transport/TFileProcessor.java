/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

package org.apache.thrift.transport;

import org.apache.thrift.TException;
import org.apache.thrift.TProcessor;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.protocol.TProtocolFactory;

/**
 * FileProcessor: helps in processing files generated by TFileTransport. Port of original cpp
 * implementation
 */
public class TFileProcessor {

  private TProcessor processor_;
  private TProtocolFactory inputProtocolFactory_;
  private TProtocolFactory outputProtocolFactory_;
  private TFileTransport inputTransport_;
  private TTransport outputTransport_;

  public TFileProcessor(
      TProcessor processor,
      TProtocolFactory protocolFactory,
      TFileTransport inputTransport,
      TTransport outputTransport) {
    processor_ = processor;
    inputProtocolFactory_ = outputProtocolFactory_ = protocolFactory;
    inputTransport_ = inputTransport;
    outputTransport_ = outputTransport;
  }

  public TFileProcessor(
      TProcessor processor,
      TProtocolFactory inputProtocolFactory,
      TProtocolFactory outputProtocolFactory,
      TFileTransport inputTransport,
      TTransport outputTransport) {
    processor_ = processor;
    inputProtocolFactory_ = inputProtocolFactory;
    outputProtocolFactory_ = outputProtocolFactory;
    inputTransport_ = inputTransport;
    outputTransport_ = outputTransport;
  }

  private void processUntil(int lastChunk) throws TException {
    TProtocol ip = inputProtocolFactory_.getProtocol(inputTransport_);
    TProtocol op = outputProtocolFactory_.getProtocol(outputTransport_);
    int curChunk = inputTransport_.getCurChunk();

    try {
      while (lastChunk >= curChunk) {
        processor_.process(ip, op);
        int newChunk = inputTransport_.getCurChunk();
        curChunk = newChunk;
      }
    } catch (TTransportException e) {
      // if we are processing the last chunk - we could have just hit EOF
      // on EOF - trap the error and stop processing.
      if (e.getType() != TTransportException.END_OF_FILE) throw e;
      else {
        return;
      }
    }
  }

  /**
   * Process from start to last chunk both inclusive where chunks begin from 0
   *
   * @param startChunkNum first chunk to be processed
   * @param endChunkNum last chunk to be processed
   * @throws TException if endChunkNum is less than startChunkNum.
   */
  public void processChunk(int startChunkNum, int endChunkNum) throws TException {
    int numChunks = inputTransport_.getNumChunks();
    if (endChunkNum < 0) endChunkNum += numChunks;

    if (startChunkNum < 0) startChunkNum += numChunks;

    if (endChunkNum < startChunkNum)
      throw new TException("endChunkNum " + endChunkNum + " is less than " + startChunkNum);

    inputTransport_.seekToChunk(startChunkNum);
    processUntil(endChunkNum);
  }

  /**
   * Process a single chunk
   *
   * @param chunkNum chunk to be processed
   * @throws TException on error while processing the given chunk.
   */
  public void processChunk(int chunkNum) throws TException {
    processChunk(chunkNum, chunkNum);
  }

  /**
   * Process a current chunk
   *
   * @throws TException on error while processing the given chunk.
   */
  public void processChunk() throws TException {
    processChunk(inputTransport_.getCurChunk());
  }
}
