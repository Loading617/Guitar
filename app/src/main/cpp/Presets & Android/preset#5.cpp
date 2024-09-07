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

preset Guitar {
    name = "Guitar";
    synth = Synth::Guitar;
    audioInput = AudioInput::Microphone;
    midiInput = MidiInput::Guitar;
    beatDetection = BeatDetection::On;
};

preset AcousticGuitarElectricPiano {
    name = "Acoustic Guitar Electric Piano";
    tuning = Guitar::Standard;
    audioInput = AudioInput::ElectricPiano;
};