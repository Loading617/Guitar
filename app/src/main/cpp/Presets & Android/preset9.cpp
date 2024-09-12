//
// Presets for Guitar.
//

#include "preset"

#include "beatdetection"

#include "audioinput"

#include "presetmanager"

#include "synth"

#include "midiinput"

#include "android.h"

// Define the Guitar preset

preset Guitar {
    name = "Guitar";
    synth = Synth::Guitar;
    audioInput = AudioInput::Microphone;
    midiInput = MidiInput::Guitar;
    beatDetection = BeatDetection::On;
};

// Define the presets for different guitar chord progressions

preset MajorChordProgression {
    name = "Major Chord Progression";
    chordProgression = ChordProgression::Major;
};
