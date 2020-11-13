/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.apache.spark.sql.execution.datasources

import scala.collection.mutable.ArrayBuffer

import org.apache.spark.SparkEnv

class EtcdClient extends ExternalDBClient {

  override def init(sparkEnv: SparkEnv): Unit = {}

  override def get(fileName: String, offSet: Long, length: Long):
  ArrayBuffer[CacheMetaInfoValue] = null

  override def upsert(cacheMetaInfo: CacheMetaInfo): Unit = {}

  override def stop(): Unit = {}

}