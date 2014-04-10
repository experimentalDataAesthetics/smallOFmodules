#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
	ofBackground(0, 0, 0);

	// open an outgoing connection to HOST:PORT
	sender.setup(HOST, PORT);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	// display instructions
	string buf;
	buf = "ofX sending osc messages to " + string(HOST) + " " + ofToString(PORT);
	ofDrawBitmapString(buf, 10, 20);
	ofDrawBitmapString("press keyboard to send osc message as defined", 10, 40);
    
    ofxOscMessage m;
    m.setAddress("/d_load");
    m.addStringArg("/Applications/SuperCollider/SuperCollider.app/Contents/Resources/synthdefs/spring.scsyndef");
    sender.sendMessage(m);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	if(key == 'a' || key == 'A'){

	}

	if(key == 'b' || key == 'B'){
		ofxOscMessage m;
        m.setAddress("/s_new");
		m.addStringArg("spring");
        m.addIntArg(-1);
        m.addIntArg(0);
        m.addIntArg(0);
		m.addStringArg("springfac");
        m.addIntArg(1000);
        sender.sendMessage(m);


	}
    
    if(key == 'c' || key == 'C'){
		ofxOscMessage m;
        m.setAddress("/s_new");
		m.addStringArg("spring");
        m.addIntArg(-1);
        m.addIntArg(0);
        m.addIntArg(0);
		m.addStringArg("springfac");
        m.addIntArg(100);
        sender.sendMessage(m);
        
        
	}
    
    if(key == 'd' || key == 'D'){
		ofxOscMessage m;
        m.setAddress("/s_new");
		m.addStringArg("spring");
        m.addIntArg(-1);
        m.addIntArg(0);
        m.addIntArg(0);
		m.addStringArg("springfac");
        m.addIntArg(100);
        m.addStringArg("damp");
        m.addFloatArg(0.0001);
        sender.sendMessage(m);
        
        
	}



}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
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

