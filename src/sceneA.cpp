#include "sceneA.hpp"

//--------------------------------------------------------------
void sceneA::setup(){
    ofBackground(39);
    
}

//--------------------------------------------------------------
void sceneA::update(){
    
}

//--------------------------------------------------------------
void sceneA::draw(){
    
    ofSetColor(239);
    for (int i = 0; i < nBandsToGet; i++) {
        ofDrawRectangle(200 + i*800.0/nBandsToGet, 500, 800.0/nBandsToGet, (fftSmoothed[i])*300);
    }
    
}

//--------------------------------------------------------------
void sceneA::keyPressed(int key){
    
}

//--------------------------------------------------------------
void sceneA::keyReleased(int key){
    
}

//--------------------------------------------------------------
void sceneA::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void sceneA::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneA::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneA::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void sceneA::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void sceneA::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void sceneA::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void sceneA::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void sceneA::dragEvent(ofDragInfo dragInfo){
    
}
