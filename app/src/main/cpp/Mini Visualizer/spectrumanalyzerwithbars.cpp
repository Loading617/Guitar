//
// Mini Visualizer for Guitar.
//

#include "visualizer below the music player"
#include "spectrum analyzer with bars"

#include "android.h"

void init_visualizer_below_the_music_player();

void init_visualizer_below_the_music_player() {
    // Initialize the visualizer algorithm
    visualizer_init();

    // Initialize the spectrum analyzer algorithm
    spectrum_analyzer_init();
}

void draw_spectrum_bars(int spectrum_data[], int spectrum_size);

void draw_spectrum_bars(int spectrum_data[], int spectrum_size) {
    // Draw the spectrum bars using the spectrum analyzer algorithm
    spectrum_analyzer_draw_bars(spectrum_data, spectrum_size);
}

void draw_visualizer_below_the_music_player(int spectrum_data[], int spectrum_size) {
    // Draw the visualizer below the music player using the visualizer algorithm
    visualizer_draw_below_the_music_player(spectrum_data, spectrum_size);
}

void update_visualizer_below_the_music_player(int spectrum_data[], int spectrum_size);

void update_visualizer_below_the_music_player(int spectrum_data[], int spectrum_size) {
    // Update the visualizer below the music player using the visualizer algorithm
    visualizer_update_below_the_music_player(spectrum_data, spectrum_size);
}