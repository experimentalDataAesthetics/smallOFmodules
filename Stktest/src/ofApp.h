#pragma once

#include "ofMain.h"
#include "ModalBar.h"

class ofApp : public ofBaseApp{

private:
public:
    
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void audioOut(float * input, int bufferSize, int nChannels);
    
    stk::ModalBar modalBar;
    ofSoundStream soundStream;
    
    float 	pan;
    int		sampleRate;
    
    vector <float> lAudio;
    vector <float> rAudio;
    
};
