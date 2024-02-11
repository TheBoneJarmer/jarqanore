#include <string>
#include "be_labruyere_arqanore_Arqanore.h"
#include "arqanore/arqanore.h"
#include "jni_utils.h"

jstring Java_be_labruyere_arqanore_Arqanore__1getVersion(JNIEnv *env, jclass cls) {
    std::string value = arqanore::Arqanore::get_version();
    return convert_java_string(env, value);
}

jstring Java_be_labruyere_arqanore_Arqanore__1getOpenGLVersion(JNIEnv *env, jclass cls) {
    std::string value = arqanore::Arqanore::get_opengl_version();
    return convert_java_string(env, value);
}
