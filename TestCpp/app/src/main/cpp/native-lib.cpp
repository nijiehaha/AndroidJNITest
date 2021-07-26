#include <jni.h>
#include <string>
#include "test/test.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_permission_testcpp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
//    std::string hello = "Hello from C++";
    std::string hello = test();
    return env->NewStringUTF(hello.c_str());
}