#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    // Shape 1: two lines originating from the same point and connected in the other end with a semi-circle
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
    
    // Shape 2: five points connected with lines
    shape2.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    for (int i = 0; i < 5; i++) {
        shape2.lineTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    shape2.close();
    
    //Shape 3:
    shape3.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    for (int i = 0; i < 5; i++) {
        shape3.curveTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    }
    shape3.close();

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(ofColor::red);
    shape1.draw();
    ofSetColor(ofColor::blue);
    shape2.draw();
    ofSetColor(ofColor::yellow);
    shape3.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'n') {
        // Shape 1
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
        
        // Shape2
        shape2.clear();
        for (int i = 0; i < 5; i++) {
            shape2.lineTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        }
        shape2.close();
        
        shape3.clear();
        shape3.addVertex(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        for (int i = 0; i < 5; i++) {
            shape3.curveTo(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        }
        shape3.close();
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
