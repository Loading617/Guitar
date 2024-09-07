#include "set audio processing"

        // Set the audio processing parameters
    set_audio_processing_enabled(true);
    set_audio_processing_sample_rate(44100);
    set_audio_processing_input_gain(1.0f);
    set_audio_processing_output_gain(1.0f);
    set_audio_processing_input_channels(2);
    set_audio_processing_output_channels(2);
    set_audio_processing_input_format(AUDIO_FORMAT_FLOAT);
    set_audio_processing_output_format(AUDIO_FORMAT_FLOAT);
    set_audio_processing_input_interleaved(true);
    set_audio_processing_output_interleaved(true);
    set_audio_processing_callback_frequency(100);
    set_audio_processing_callback_function([](float* input_buffer, float* output_buffer, int num_samples, int
    num_channels)
    
    {
        // Implement your custom audio processing callback function here
        audioProcessing(input_buffer, output_buffer, num_samples, num_channels);
    });

    void audioProcessing(float *inputSamples, float *outputSamples, int numSamples) {
    for (int i = 0; i < numSamples; i++) {
        // Apply your custom audio processing here
        outputSamples[i] = inputSamples[i] * 0.5; // Example: halve the input sample
    }
}

int main() {
    // Set up the audio processing plugin
    setAudioProcessing(audioProcessing);
    
    return 0;
}

// Example: Using the plugin to play a sine wave

#include <cmath>

void audioProcessing(float *inputSamples, float *outputSamples, int numSamples) {
    for (int i = 0; i < numSamples; i++) {
        float frequency = 440.0f; // Hz
        float sampleRate = 44100.0f; // Hz
        float angle = 2.0f * M_PI * frequency * i / sampleRate;
        outputSamples[i] = sinf(angle);
    }
}

int main() {

    // Set up the audio processing plugin
    setAudioProcessing(audioProcessing);
    
    // Play a sine wave for 5 seconds
    int numSamples = 5 * 44100; // 5 seconds * sample rate
    float *inputSamples = new float[numSamples];
    float *outputSamples = new float[numSamples];
    
    for (int i = 0; i < numSamples; i++) {
        inputSamples[i] = 0.0f; // Fill with silence
    }
    
    audioProcessing(inputSamples, outputSamples, numSamples);