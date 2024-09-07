#include <string>

#include "start audio input"

// Function to convert audio samples to a string

std::string audio_samples_to_string(const float* samples, int num_samples) {
    std::string result;
    for (int i = 0; i < num_samples; ++i) {
        result += std::to_string(samples[i]) + " ";
    }
    return result;
}

int main() {

    // Start audio input
    start_audio_input();
    
    // Process audio samples in a loop
    while (true) {
        float samples[1024]; // Example: 1024 samples per audio frame
        int num_samples = get_audio_samples(samples, 1024);
        
        // Convert audio samples to a string
        std::string audio_string = audio_samples_to_string(samples, num_samples);
        
        // Process the audio string here
        // For example, print it or save it to a file
        std::cout << "Audio samples: " << audio_string << std::endl;
    }
    
    // Stop audio input
    stop_audio_input();
    
    return 0;
}