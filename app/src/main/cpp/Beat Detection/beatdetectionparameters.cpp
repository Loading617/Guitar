#include "beatdetectionparameters"

#include "android.h"

#include <jni.h>

#include <string>

#include <vector>

#include <android/log.h>

// Set the beat detection parameters
    set_beat_detection_enabled(true);
    set_beat_detection_threshold(0.75f);
    set_beat_detection_buffer_size(1024);
    set_beat_detection_sample_rate(44100);
    set_beat_detection_bpm_range(60.0f, 180.0f);
    set_beat_detection_bpm_smoothing_factor(0.9f);
    set_beat_detection_bpm_smoothing_window_size(2048);
    set_beat_detection_bpm_smoothing_max_iterations(10);
    set_beat_detection_bpm_smoothing_min_bpm(60.0f);
    set_beat_detection_bpm_smoothing_max_bpm(180.0f);
    set_beat_detection_bpm_smoothing_min_bpm_change_threshold(1.0f);
    set_beat_detection_bpm_smoothing_max_bpm_change_threshold(5.0f);
    set_beat_detection_bpm_smoothing_min_bpm_change_duration(0.1f);
    set_beat_detection_bpm_smoothing_max_bpm_change_duration(1.0f);
    set_beat_detection_bpm_smoothing_min_bpm_change_magnitude(0.01f);

    JNIEnv* env;
    JavaVM* jvm;
    jclass beatDetectionParametersClass;
    jmethodID beatDetectionParametersConstructor;

    // Initialize the JavaVM and get the JNI environment
    if (GetJavaVM(&jvm) != JNI_OK) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to get JavaVM");
        return;
    }
    env = GetEnvFromJavaVM(jvm, NULL);
    if (env == NULL) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to get JNI environment");
        return;
    }
    if (beatDetectionParametersClass == NULL) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to find BeatDetectionParameters class");
        return;
    }
    // Get the BeatDetectionParameters class
    beatDetectionParametersClass = env->FindClass("com/example/beatdetection/BeatDetectionParameters");
    if (beatDetectionParametersClass == NULL) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to find BeatDetectionParameters class");
        return;
    }
    if (beatDetectionParametersClass == NULL) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to create BeatDetectionParameters object");
        return;
    }
    // Create a new instance of BeatDetectionParameters
    beatDetectionParametersConstructor = env->GetMethodID(beatDetectionParametersClass, "<init>", "()V");
    if (beatDetectionParametersConstructor == NULL) {
        __android_log_print(ANDROID_LOG_ERROR, "BeatDetectionParameters", "Failed to find BeatDetectionParameters constructor");
        return;
    }
    jobject beatDetectionParametersObject = env->NewObject(beatDetectionParametersClass, beatDetectionParametersConstructor);

    // Set the beat detection parameters in the BeatDetectionParameters object
    jfieldID beatDetectionEnabledField = env->GetFieldID(beatDetectionParametersClass, "beatDetectionEnabled", "Z");
    env->SetBooleanField(beatDetectionParametersObject, beatDetectionEnabledField, true);
    jfieldID beatDetectionThresholdField = env->GetFieldID(beatDetectionParametersClass, "beatDetectionThreshold", "F");
    env->SetFloatField(beatDetectionParametersObject, beatDetectionThresholdField, 0.75f);
    jfieldID beatDetectionBufferSizeField = env->GetFieldID(beatDetectionParametersClass, "beatDetectionBufferSize", "I");
    env->SetIntField(beatDetectionParametersObject, beatDetectionBufferSizeField, 1024);
    jfieldID beatDetectionSampleRateField = env->GetFieldID(beatDetectionParametersClass, "beatDetectionSampleRate", "I");
    env->SetIntField(beatDetectionParametersObject, beatDetectionSample
    
    return 0;