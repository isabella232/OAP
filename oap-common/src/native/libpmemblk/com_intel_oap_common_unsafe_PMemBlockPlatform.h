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

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_oap_common_unsafe_PMemBlockPlatform */

#ifndef _Included_com_intel_oap_common_unsafe_PMemBlockPlatform
#define _Included_com_intel_oap_common_unsafe_PMemBlockPlatform
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    create
 * Signature: (Ljava/lang/String;JJ)V
 */
JNIEXPORT void JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_create
  (JNIEnv *, jclass, jstring, jlong, jlong);

/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    write
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_write
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    read
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_read
  (JNIEnv *, jclass, jbyteArray, jint);

/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    clear
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_clear
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_close
  (JNIEnv *, jclass);

/*
 * Class:     com_intel_oap_common_unsafe_PMemBlockPlatform
 * Method:    getBlockNum
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_oap_common_unsafe_PMemBlockPlatform_getBlockNum
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif