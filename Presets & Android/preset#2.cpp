#include "preset"

#include "beatdetection"

#include "audioinput"

#include "presetmanager"

#include "presetsaver"
#include "android.h"

#include <iostream>
#include <vector>

// Define the JNI object reference for the visualization window
    JNIEnv* env;
    JavaVM* jvm;
    JNI_CreateJavaVM(&jvm, &env, nullptr);
    jclass jcls = env->FindClass("com/example/visualizer/MainActivity");
    jmethodID jmid = env->GetMethodID(jcls, "getJObj", "()Ljava/lang/Object;");
    jobj = env->CallObjectMethod(jcls, jmid);

    // Define the preset objects
    std::vector<Preset> presets = {
        {"preset1", "Material 1", "Texture 1", 0.5f, 0.5f, 0.5f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,

void init_visualizer() {
    // Initialize the visualization window using the provided Android JNI functions
    JNIEnv* env;
    JavaVM* jvm;
    JNI_CreateJavaVM(&jvm, &env, nullptr);
    jclass jcls = env->FindClass("com/example/visualizer/MainActivity");
    jmethodID jmid = env->GetMethodID(jcls, "initVisualizer", "()V");
    env->CallVoidMethod(jobj, jmid);
    env->DeleteLocalRef(jcls);
    env->DeleteLocalRef(jvm);
    env->ReleaseCurrentThread();
    std::cout << "Visualization window initialized" << std::endl;
}

int main() {
    // Initialize the visualization window
    init_visualizer();

    // Set the window size
    set_window_size(800, 600);

    // Set the camera position
    set_camera_position(0, 0, 3);
    set_camera_target(0, 0, 0);
    set_camera_up(0, 1, 0);
    set_camera_fov(45.0f);
    set_camera_near_plane(0.1f);
    set_camera_far_plane(100.0f);
    set_camera_orthographic(false);
    set_camera_ortho_size(4.0f);
    set_camera_ortho_left(-2.0f);

    // Set the light position
    set_light_position(0, 5, 5);
    set_light_color(1.0f, 1.0f, 1.0f);
    set_light_intensity(1.0f);
    set_light_attenuation(0.0f, 0.0f, 0.01f);
    set_light_type(LIGHT_POINT);
    set_light_cast_shadows(true);
    set_light_shadow_map_size(1024);
    set_light_shadow_map_bias(0.005f);
    set_light_shadow_map_resolution_multiplier(1.0f);
    set_light_shadow_map_depth_bias(0.0001f);
    set_light_shadow_map_normal_bias(0.0001f);
    set_light_shadow_map_normal_resolution_multiplier(1.0f);
    set_light_shadow_map_split_count(2);
    set_light_shadow_map_split_distribution(SHADOW_MAP_SPLIT_UNIFORM);
    set_light_shadow_map_split_sizes({0.5f, 0.5f});
    set_light_shadow_map_split_offsets({0.0f, 0.0f});


    // Set the material properties
    set_material_ambient(0.1f, 0.1f, 0.1f);
    set_material_diffuse(0.8f, 0.8f, 0.8f);
    set_material_specular(0.0f, 0.0f, 0.0f);
    set_material_shininess(0.0f);