//
// Created by jahim on 8/12/2024.
//

#include "android.h"

#include <jni.h>

#include <string>

extern "C" {

JNIEXPORT jstring JNICALL Java_com_example_jnitest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from JNI!";
    return env->NewStringUTF(hello.c_str());
}

}