/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zh_dlibtest_DlibTest */

#ifndef _Included_com_zh_dlibtest_DlibTest
#define _Included_com_zh_dlibtest_DlibTest
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_zh_dlibtest_DlibTest
 * Method:    detect
 * Signature: (J)V
 */

//初始化模型
JNIEXPORT jint  JNICALL Java_com_zh_dlibtest_DlibTest_initModel
  (JNIEnv *, jclass, jstring);

//人脸收集
JNIEXPORT jint  JNICALL Java_com_zh_dlibtest_DlibTest_collect
  (JNIEnv *, jclass, jlong, jstring, jint);

//人脸识别
JNIEXPORT jint  JNICALL Java_com_zh_dlibtest_DlibTest_faceReco
  (JNIEnv *, jclass, jlong, jstring);

//人脸跟踪
JNIEXPORT jstring  JNICALL Java_com_zh_dlibtest_DlibTest_track
  (JNIEnv *, jclass, jlong, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
