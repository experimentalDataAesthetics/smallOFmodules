#pragma once

#include "ofMain.h"
#include "Gamma/gen.h"
#include "Gamma/Oscillator.h"

class testApp : public ofBaseApp{

    void setup();
    void update();
    void draw();
    

    void mouseMoved(int x, int y );
        
    void audioOut(float * input, int bufferSize, int nChannels);
    
    
    ofSoundStream soundStream;
    
    float 	pan;
    int		sampleRate;
    bool 	bNoise;
    float 	volume;
    
    vector <float> lAudio;
    vector <float> rAudio;
    
    //------------------- for the simple sine wave synthesis
    float 	targetFrequency;
    float 	phase;
    float 	phaseAdder;
    float 	phaseAdderTarget;
   
    gam::Sine<float> osc;
    gam::Sine<float> mod;
};
