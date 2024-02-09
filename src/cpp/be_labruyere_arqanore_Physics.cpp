#include "be_labruyere_arqanore_Physics.h"
#include "arqanore/physics.h"
#include "arq_utils.h"

jobject Java_be_labruyere_arqanore_Physics__1getGravity(JNIEnv *env, jclass cls) {
    auto vec = arqanore::Physics::gravity();
    return convert_vector3(env, vec);
}

jboolean Java_be_labruyere_arqanore_Physics__1isGravityEnabled(JNIEnv *env, jclass cls) {
    return arqanore::Physics::gravity_enabled();
}

jboolean Java_be_labruyere_arqanore_Physics__1isSleepingEnabled(JNIEnv *env, jclass cls) {
    return arqanore::Physics::sleeping_enabled();
}

jfloat Java_be_labruyere_arqanore_Physics__1getSleepLinearVelocity(JNIEnv *env, jclass cls) {
    return arqanore::Physics::sleep_linear_velocity();
}

jfloat Java_be_labruyere_arqanore_Physics__1getSleepAngularVelocity(JNIEnv *env, jclass cls) {
    return arqanore::Physics::sleep_angular_velocity();
}

jfloat Java_be_labruyere_arqanore_Physics__1getTimeBeforeSleep(JNIEnv *env, jclass cls) {
    return arqanore::Physics::time_before_sleep();
}

void Java_be_labruyere_arqanore_Physics__1setGravity(JNIEnv *env, jclass cls, jobject value) {
    auto vec = convert_vector3(env, value);
    arqanore::Physics::gravity(vec);
}

void Java_be_labruyere_arqanore_Physics__1setGravityEnabled(JNIEnv *env, jclass cls, jboolean value) {
    arqanore::Physics::gravity_enabled(value);
}

void Java_be_labruyere_arqanore_Physics__1setSleepingEnabled(JNIEnv *env, jclass cls, jboolean value) {
    arqanore::Physics::sleeping_enabled(value);
}

void Java_be_labruyere_arqanore_Physics__1setSleepLinearVelocity(JNIEnv *env, jclass cls, jfloat value) {
    arqanore::Physics::sleep_linear_velocity(value);
}

void Java_be_labruyere_arqanore_Physics__1setSleepAngularVelocity(JNIEnv *env, jclass cls, jfloat value) {
    arqanore::Physics::sleep_angular_velocity(value);
}

void Java_be_labruyere_arqanore_Physics__1setTimeBeforeSleep(JNIEnv *env, jclass cls, jfloat value) {
    arqanore::Physics::time_before_sleep(value);
}