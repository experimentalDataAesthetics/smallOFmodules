#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "gsl_monte.h"
#include "gsl_monte_vegas.h"


#include "ofxGSL.h"

#define HOST "localhost"
#define PORT 57110

//--------------------------------------------------------
class testApp : public ofBaseApp {

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        //forGSLtest
        void monteVegasIntegrate(gsl_monte_function * f, double xLower[], double xUpper[], gsl_rng *range, int dimensions, int numCalls);


		ofTrueTypeFont font;
		ofxOscSender sender;

};

