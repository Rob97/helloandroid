#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_edu_washington_sseera_hello_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Go Dawgs!";
    return env->NewStringUTF(hello.c_str());
}
