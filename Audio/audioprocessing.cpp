#include "audio processing"

int main() {
    // Create an audio processing object
    AudioProcessing audioProcessor;
    
    // Set the input signal
    float inputSignal[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    audioProcessor.setInputSignal(inputSignal, 5);
    
    // Perform audio processing operations
    audioProcessor.applyLowPassFilter(2000.0, 0.01);
    audioProcessor.applyHighPassFilter(1000.0, 0.01);
    audioProcessor.applyNotchFilter(1500.0, 500.0, 0.01);
    
    // Get the processed signal
    float* processedSignal = audioProcessor.getProcessedSignal();
    
    // Print the processed signal
    for (int i = 0; i < 5; i++) {
        std::cout << processedSignal[i] << " ";
    }
    std::cout << std::endl;
    
    // Free the allocated memory
    delete[] processedSignal;
    
    return 0;