#include "beatdetection"

#include "android.h"

#include <jni.h>

#include <string>

#include <vector>

#include <android/log.h>

#define LOG_TAG "BeatDetection"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" {

JNIEXPORT jdoubleArray JNICALL Java_com_example_beatdetection_BeatDetection_detectBeats(
        JNIEnv* env,
        jclass,
        jdoubleArray audioData,
        jint sampleRate,
        jint numFrames) {
    std::vector<double> audio_data(env->GetDoubleArrayElements(audioData, nullptr),
                                  env->GetDoubleArrayElements(audioData, nullptr) + numFrames);

    BeatDetection beat_detection(sampleRate);
    std::vector<double> beats = beat_detection.detectBeats(audio_data);

    jdoubleArray beatArray = env->NewDoubleArray(beats.size());
    env->SetDoubleArrayRegion(beatArray, 0, beats.size(), beats.data());
    return beatArray;
    env->ReleaseDoubleArrayElements(audioData, audio_data.data(), JNI_ABORT);
    env->DeleteLocalRef(beatArray);
    env->DeleteLocalRef(audioData);
    beat_detection.clear();
    beats.clear();
    return nullptr;
    // TODO: Add cleanup code here
    // For example, delete the beat detection object and the vectors
}

}  // extern "C"
return 0;