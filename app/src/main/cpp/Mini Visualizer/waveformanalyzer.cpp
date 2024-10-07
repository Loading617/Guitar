//
// Mini Visualizer for Guitar.
//
#include "visualizer below the music player"
#include "waveform analyzer with reflection"

    void init_visualizer_below_the_music_player();

    void init_visualizer_below_the_music_player() {
        // Initialize the visualizer algorithm
        visualizer_init();

        // Initialize the waveform analyzer with reflection
        waveform_analyzer_init();
    }
    void update_visualizer(float* audio_data, int audio_data_length);
    void update_visualizer(float* audio_data, int audio_data_length) {
        // Update the visualizer with the new audio data
        visualizer_update(audio_data, audio_data_length);

        // Update the waveform analyzer with the new audio data
        waveform_analyzer_update(audio_data, audio_data_length);
    }
    void draw_visualizer();
    void draw_visualizer() {
        // Draw the visualizer and waveform analyzer
        visualizer_draw();
        waveform_analyzer_draw();
    }
