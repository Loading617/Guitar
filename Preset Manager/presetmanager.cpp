#include "preset"

#include "beatdetection"

#include "audioinput"

#include "presetmanager"

#include "lights"

#include "midiinput"

#include "android.h"

// Preset 1

void setup() {
  // Set up the preset manager with the number of presets.
  presetManager.setup(400);

  // Create a new preset and set its name and parameters.
  presets[0].name = "Guitar Preset 1";
  presets[0].parameters[0] = 1.0; // Volume
  presets[0].parameters[1] = 0.5; // Treble
  presets[0].parameters[2] = 0.5; // Bass
  presets[0].parameters[3] = 0.5; // Mid
  presets[0].parameters[4] = 0.5; // Sustain
  presets[0].parameters[5] = 0.5; // Release
  presets[0].parameters[6] = 0.5; // Attack
  presets[0].parameters[7] = 0.5; // Decay
}

// Preset 2

void setup() {
  // Set up the preset manager with the number of presets.
  presetManager.setup(400);

  // Create a new preset and set its name and parameters.
  presets[0].name = "Guitar Preset 2";
  presets[0].parameters[0] = 1.0; // Volume
  presets[0].parameters[1] = 0.5; // Treble
  presets[0].parameters[2] = 0.5; // Bass
  presets[0].parameters[3] = 0.5; // Mid
  presets[0].parameters[4] = 0.5; // Sustain
  presets[0].parameters[5] = 0.5; // Release
  presets[0].parameters[6] = 0.5; // Attack
  presets[0].parameters[7] = 0.5; // Decay
}

// Preset 3
