/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class be_labruyere_arqanore_Material */

#ifndef _Included_be_labruyere_arqanore_Material
#define _Included_be_labruyere_arqanore_Material
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Material__1create
  (JNIEnv *, jobject);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_be_labruyere_arqanore_Material__1getName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getColor
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Material__1getColor
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getDiffuse
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Material__1getDiffuse
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getAmbient
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Material__1getAmbient
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getSpecular
 * Signature: (J)Lbe/labruyere/arqanore/Color;
 */
JNIEXPORT jobject JNICALL Java_be_labruyere_arqanore_Material__1getSpecular
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getShininess
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_be_labruyere_arqanore_Material__1getShininess
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getDiffuseMap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Material__1getDiffuseMap
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getAmbientMap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Material__1getAmbientMap
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _getSpecularMap
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_be_labruyere_arqanore_Material__1getSpecularMap
  (JNIEnv *, jobject, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setName
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setName
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setColor
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setColor
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setDiffuse
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setDiffuse
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setAmbient
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setAmbient
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setSpecular
 * Signature: (JLbe/labruyere/arqanore/Color;)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setSpecular
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setShininess
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setShininess
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setDiffuseMap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setDiffuseMap
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setAmbientMap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setAmbientMap
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     be_labruyere_arqanore_Material
 * Method:    _setSpecularMap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_be_labruyere_arqanore_Material__1setSpecularMap
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
