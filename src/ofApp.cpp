#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    randX = ofRandom(100, ofGetWidth()-100);
    randY = ofRandom(100, ofGetHeight()-100);
    randX2 = ofRandom(100, ofGetWidth()-100);
    randY2 = ofRandom(100, ofGetHeight()-100);
    randRad = ofRandom(10, 100);
    
    shape1.addVertex(randX , randY);
    shape1.lineTo(randX2, randY2);
    ofPoint arcMid(randX2-randRad , randY2);
    shape1.arc(arcMid, randRad, randRad, 0, 180);
    shape1.lineTo(randX, randY);
    ofSetColor(ofColor::red);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    shape1.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'n') {
        shape1.clear();
        randX = ofRandom(100, ofGetWidth()-100);
        randY = ofRandom(100, ofGetHeight()-100);
        randX2 = ofRandom(100, ofGetWidth()-100);
        randY2 = ofRandom(100, ofGetHeight()-100);
        randRad = ofRandom(10, 100);
        
        shape1.addVertex(randX , randY);
        shape1.lineTo(randX2, randY2);
        ofPoint arcMid(randX2-randRad , randY2);
        shape1.arc(arcMid, randRad, randRad, 0, 180);
        shape1.lineTo(randX, randY);
        ofSetColor(ofColor::red);
    }

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
