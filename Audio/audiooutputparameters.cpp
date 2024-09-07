#include "audio output parameters"

// Set the audio output parameters
    set_audio_output_enabled(true);
    set_audio_output_device_index(0);
    set_audio_output_gain(1.0f);
    set_audio_output_buffer_size(1024);
    set_audio_output_sample_rate(44100);
    set_audio_output_channels(2);
    set_audio_output_format(AUDIO_FORMAT_FLOAT);
    set_audio_output_interleaved(true);
    set_audio_output_blocking_mode(false);
    set_audio_output_callback_frequency(100);
    set_audio_output_callback_function([](float* buffer, int num_samples, int num_channels)