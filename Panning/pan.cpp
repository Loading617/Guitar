#include "panning"

#include "android.h"

#include <jni.h>
#include <android/log.h>

#include <string>

#define LOG_TAG "Panning"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

extern "C" {

JNIEXPORT jfloatArray JNICALL Java_com_example_panning_MainActivity_calculatePan(
        JNIEnv* env,
        jclass clazz,
        jfloatArray audioData,
        int sampleRate,
        int numSamples) {

    float* audio = env->GetFloatArrayElements(audioData, 0);

    PanConfig config;
    config.pan = 0.0f;
    config.pan_ramp = 0.0f;
    config.fade_in = 0.0f;
    config.fade_out = 0.0f;
    config.speed = 1.0f;
    config.sample_rate = sampleRate;
    config.num_samples = numSamples;

    float* panned_audio = panning_process(audio, &config);

    jfloatArray resultArray = env->NewFloatArray(numSamples);
    env->SetFloatArray
    (resultArray, 0, panned_audio, numSamples);
    env->ReleaseFloatArrayElements(audioData, audio, 0);
    free(panned_audio);
    return resultArray;