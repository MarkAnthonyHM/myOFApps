#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    
    ofBackground(255);
    
    walkerX = ofGetWidth() / 2;
    walkerY = ofGetHeight() / 2;
    
    walkerR = 127;
    walkerG = 127;
    walkerB = 127;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    float stepSize = ofRandom(0,10);
    walkerX = walkerX + ofRandom(-stepSize,stepSize);
    walkerY = walkerY + ofRandom(-stepSize,stepSize);
    
    float stepSizeColor = ofRandom(5,10);
    
    walkerR = walkerR + ofRandom(-stepSizeColor ,stepSizeColor);
    walkerG = walkerG + ofRandom(-stepSizeColor ,stepSizeColor);
    walkerB = walkerB + ofRandom(-stepSizeColor ,stepSizeColor);
    
    walkerR = ofClamp(walkerR, 0,255);
    walkerG = ofClamp(walkerG, 0,255);
    walkerB = ofClamp(walkerB, 0,255);

    ofSetColor(walkerR, walkerG, walkerB);
    
    ofDrawCircle(walkerX, walkerY, 20);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
