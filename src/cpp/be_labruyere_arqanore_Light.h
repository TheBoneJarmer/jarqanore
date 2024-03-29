/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Light */

#ifndef _Included_be_labruyere_arqanore_Light
#define _Included_be_labruyere_arqanore_Light
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Light__1create__
  (JNIEnv *, jobject);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _create
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Light__1create__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _getLightType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_be_labruyere_arqanore_Light__1getLightType
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _getSource
 * Signature: (J)Lbe/labruyere/arqanore/Vector3;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Light__1getSource
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _getColor
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Light__1getColor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _isEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_be_labruyere_arqanore_Light__1isEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _getStrength
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Light__1getStrength
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _getRange
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Light__1getRange
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setLightType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setLightType
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setSource
 * Signature: (JLbe/labruyere/arqanore/Vector3;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setSource
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setColor
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setColor
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setEnabled
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setStrength
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setStrength
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     be_labruyere_arqanore_Light
 * Method:    _setRange
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Light__1setRange
  (JNIEnv *, jobject, jlong, jfloat);

#ifdef __cplusplus
}
#endif
#endif
