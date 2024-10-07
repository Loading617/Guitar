//
// Mini Visualizer for Guitar.
//

#include "visualizer below the music player"
#include "stereo led uv meter"

    void init_visualizer_below_the_music_player();

    void init_visualizer_below_the_music_player() {
        // Initialize the visualizer algorithm
        visualizer_init();

        // Initialize the stereo LED UV meter
        uv_meter_init();
    }

    void update_visualizer_below_the_music_player(float* audio_data, int num_samples);

    void update_visualizer_below_the_music_player(float* audio_data, int num_samples) {
        // Update the visualizer algorithm with the incoming audio data
        visualizer_update(audio_data, num_samples);

        // Update the stereo LED UV meter with the visualizer algorithm's output
        uv_meter_update(visualizer_get_output());
    }