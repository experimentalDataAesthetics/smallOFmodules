#include "ofMain.h"
#include "ofApp.h"
#include "Stk.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
    stk::Stk::setRawwavePath(ofToDataPath("", true));

	ofRunApp(new ofApp());

}
