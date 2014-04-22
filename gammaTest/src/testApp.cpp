#include "testApp.h"

#include "Gamma/Gamma.h"
#include "Gamma/Sync.h"
//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(34, 34, 34);
	int bufferSize		= 256;
	sampleRate 			= 44100;
	lAudio.assign(bufferSize, 0.0);
	rAudio.assign(bufferSize, 0.0);
	soundStream.setup(this, 2, 0, sampleRate, bufferSize, 4);
    ofSetFrameRate(60);
    gam::Sync::master().spu(sampleRate);
    osc.freq(440);
    mod.freq(10);
}

//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(225);
	ofDrawBitmapString("AUDIO OUTPUT EXAMPLE", 32, 32);
	ofDrawBitmapString("press 's' to unpause the audio\npress 'e' to pause the audio", 31, 92);
	ofNoFill();
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    osc.freq(static_cast<float>(x) + 220.0);
    mod.freq(static_cast<float>(y));
}

//--------------------------------------------------------------
void testApp::audioOut(float * output, int bufferSize, int nChannels){


    for (int i = 0; i < bufferSize; i++){
        osc.freq(osc.freq() + mod() * 100.0);
        float sample =osc();
        lAudio[i] = output[i*nChannels    ] = sample * 0.5 ;
        rAudio[i] = output[i*nChannels + 1] = sample * 0.5 ;
    }

}
