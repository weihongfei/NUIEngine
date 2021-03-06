/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nui_NUICore */

#ifndef _Included_com_nui_NUICore
#define _Included_com_nui_NUICore
#ifdef __cplusplus
extern "C" {
#endif
#undef com_nui_NUICore_CB_FLIP
#define com_nui_NUICore_CB_FLIP 0L
#undef com_nui_NUICore_CB_SEND_JAVAMSG
#define com_nui_NUICore_CB_SEND_JAVAMSG 1L
#undef com_nui_NUICore_CB_SIZE
#define com_nui_NUICore_CB_SIZE 2L
/*
 * Class:     com_nui_NUICore
 * Method:    lockBitmap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_lockBitmap
  (JNIEnv *, jclass);

/*
 * Class:     com_nui_NUICore
 * Method:    unlockBitmap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_unlockBitmap
  (JNIEnv *, jclass);

/*
 * Class:     com_nui_NUICore
 * Method:    initializeEngine
 * Signature: (Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Bitmap;II)V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_initializeEngine
  (JNIEnv *, jclass, jstring, jstring, jobject, jint, jint);

/*
 * Class:     com_nui_NUICore
 * Method:    drawIntoBitmap
 * Signature: (Landroid/graphics/Bitmap;IIJ)V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_drawIntoBitmap
  (JNIEnv *, jclass, jobject, jint, jint, jlong);

/*
 * Class:     com_nui_NUICore
 * Method:    sendNUIMessage
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_sendNUIMessage
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_nui_NUICore
 * Method:    sendNUIMessageBuf
 * Signature: (IIII[B)V
 */
JNIEXPORT void JNICALL Java_com_nui_NUICore_sendNUIMessageBuf
  (JNIEnv *, jclass, jint, jint, jint, jint, jbyteArray);

/*
 * Class:     com_nui_NUICore
 * Method:    registerStaticCallback
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_nui_NUICore_registerStaticCallback
  (JNIEnv *, jclass, jstring, jstring, jstring, jint);

/*
 * Class:     com_nui_NUICore
 * Method:    unregisterCallback
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_nui_NUICore_unregisterCallback
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
