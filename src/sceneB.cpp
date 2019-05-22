#include "sceneB.hpp"

//--------------------------------------------------------------
void sceneB::setup(){
    ofBackground(239);
    
}

//--------------------------------------------------------------
void sceneB::update(){
    
}

//--------------------------------------------------------------
void sceneB::draw(){
    
    ofSetColor(39);
    for (int i = 0; i < nBands; i++) {
        ofDrawRectangle(250 + i*800.0/nBands, ofGetHeight()/2, 800.0/nBands, (-fft[i])*300);
    }
    
}

//--------------------------------------------------------------
void sceneB::keyPressed(int key){
    
}

//--------------------------------------------------------------
void sceneB::keyReleased(int key){
    
}

//--------------------------------------------------------------
void sceneB::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void sceneB::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneB::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneB::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneB::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void sceneB::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void sceneB::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void sceneB::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void sceneB::dragEvent(ofDragInfo dragInfo){
    
}

//--------------------------------------------------------------
void sceneB::getFft(float *fftSmoothed){
    
    fft = fftSmoothed;
    
}

//--------------------------------------------------------------
void sceneB::getNBands(int nBandsToGet){
    
    nBands = nBandsToGet;
}
