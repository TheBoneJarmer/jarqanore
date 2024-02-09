#include <cinttypes>
#include "be_labruyere_arqanore_SphereCollider.h"
#include "arqanore/collider.h"

jlong Java_be_labruyere_arqanore_SphereCollider__1create(JNIEnv *env, jobject cls, jfloat radius) {
    return (intptr_t) new arqanore::SphereCollider(radius);
}

void Java_be_labruyere_arqanore_SphereCollider__1destroy(JNIEnv *env, jobject cls, jlong collider) {
    delete (arqanore::SphereCollider *) collider;
}
