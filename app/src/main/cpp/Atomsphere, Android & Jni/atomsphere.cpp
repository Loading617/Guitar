//
// Visualizer with Guitar app.
//

#include "atomsphere.h"

#include "android.h"

// Function to initialize the visualization window
    void init_visualizer();

void init_visualizer() {
    // Initialize the Guitar app
    guitar_init();
}

// Function to set the window size
void set_window_size(int width, int height);

// Function to wait for the user to close the window
    wait_for_user_input();
    
    // Set the window size
    set_window_size(800, 600);

void wait_for_user_input() {
    // Wait for the user to close the window using the Guitar app
    guitar_wait_for_user_input();
}

void set_window_size(int width, int height) {
    // Set the window size using the Guitar app
    guitar_set_window_size(width, height);
    // Update the visualization window
    guitar_update_window();
}

// Function to set the background color
void set_background_color(float r, float g, float b);

// Function to draw a 3D vector as a colored line
void draw_vector(const Vector3D &start, const Vector3D &end, float r, float g, float b);

int main() {
    // Create a random number generator
    RandomNumberGenerator rng;
    rng.seed(time(0));
    
    // Create a 3D vector array
    Vector3D *vectors = new Vector3D[1000];
    
    // Generate random 3D vectors
    for (int i = 0; i < 1000; i++) {
        vectors[i].x = rng.uniform(-100.0, 100.0);
        vectors[i].y = rng.uniform(-100.0, 100.0);
        vectors[i].z = rng.uniform(-100.0, 100.0);
        // Generate a random color
        float r = rng.uniform(0.0, 1.0);
        float g = rng.uniform(0.0, 1.0);
        float b = rng.uniform(0.0, 1.0);
        // Draw the vector as a colored line
        draw_vector(vectors[i], vectors[i] + vectors[i].normalize() * 50.0, r, g, b);
    }

    // Wait for the user to close the window
    wait_for_user_input();
    
    // Cleanup
    delete[] vectors;
    
    return 0;
}

void set_background_color(float r, float g, float b) {
    // Set the background color using the Guitar app
    guitar_set_background_color(r, g, b);
}

void draw_vector(const Vector3D &start, const Vector3D &end, float r, float g, float b) {
    // Draw a 3D vector as a colored line using the Guitar app
    guitar_draw_line(start.x, start.y, start.z, end.x, end.y, end.z, r, g, b);
}

