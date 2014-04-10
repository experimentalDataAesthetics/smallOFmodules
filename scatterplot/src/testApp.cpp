#include "testApp.h"


float circleX[500];
float circleY[500];
float circleRad[500];

float padding = 10;


//--------------------------------------------------------------
void testApp::setup(){
    
	ofBackground(125,125,125);
	ofSetWindowTitle("random scatterplot");
    ofSetFrameRate(60);
    
    for(int i=0; i<500; i++)
    {
        circleX[i] = padding + ofRandom(0, ofGetWidth());
        circleY[i] = ofGetHeight() - (ofRandom(0, ofGetHeight()) + padding);
        circleRad[i] = 1;
    }

    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    /*
    ofSetColor(0,0,255);
    ofSetLineWidth(0.5);      // set line width to 1
    ofLine(padding, 0, padding, ofGetHeight());
    ofLine(0, (ofGetHeight()-padding), ofGetWidth(), (ofGetHeight()-padding));
    ofNoFill();
    */

    
    ofSetColor(190,255,0);
    ofFill();
    
    for(int i=0; i<500; i++)
    {
        ofCircle(circleX[i], circleY[i], circleRad[i]);
    

    }



}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    
    

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}