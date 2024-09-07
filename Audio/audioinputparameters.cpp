#include <string>

#include "audio input parameters"

    // Set the audio input parameters
    set_audio_input_enabled(true);
    set_audio_input_device_index(0);
    set_audio_input_gain(1.0f);
    set_audio_input_buffer_size(1024);
    set_audio_input_sample_rate(44100);
    set_audio_input_channels(2);
    set_audio_input_format(AUDIO_FORMAT_FLOAT);
    set_audio_input_interleaved(true);
    set_audio_input_blocking_mode(false);
    set_audio_input_callback_frequency(100);
    set_audio_input_callback_function([](float* buffer, int num_samples, int num_channels)
