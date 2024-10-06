//
// Instrument Effects for Guitar.
//

#include "instrument effect during playback"

// Function to initialize the instrument effect during playback

void init_instrument_effect_during_playback();

void init_instrument_effect_during_playback() {
    // Initialize the instrument effect algorithm
    instrument_effect_init();
}

// Function to set the instrument effect parameters during playback

void set_instrument_effect_parameters(float frequency_shift, float tremolo_depth);

void set_instrument_effect_parameters(float frequency_shift, float tremolo_depth) {
    // Set the instrument effect parameters using the instrument effect algorithm
    instrument_effect_set_parameters(frequency_shift, tremolo_depth);
}

// Function to process audio data through the instrument effect during playback


void process_audio_data(float* input_buffer, float* output_buffer, int num_samples);

void process_audio_data(float* input_buffer, float* output_buffer, int num_samples) {
    // Process the audio input and output data through the instrument effect algorithm
    instrument_effect_process(input_buffer, output_buffer, num_samples);
}

// Function to start the instrument effect during playback

void start_instrument_effect_during_playback();

void start_instrument_effect_during_playback() {
    // Start the instrument effect algorithm
    instrument_effect_start();
}