#include "ofApp.h"
#include <math\ofMath.h>

//--------------------------------------------------------------
void ofApp::setup(){
	frameBuffer.init();
	cout << PI << endl; // asegurar que PI funciona
	x2 = 0;
	y2 = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

	//Lineas en los angulos

	float x1 = 0;
	float y1 = 0;

	for (int angulo = 0; angulo < 45; ++angulo)
	{
		x2 = LongitudDeLinea * cos(angulo * (PI/180));

		y2 = LongitudDeLinea * sin(angulo * (PI/180));

		drawLine(xc, yc, xc + x2, yc + y2);
	}

	//Lineas solas
	
	//Funciona porque está dentro del primer octante
	//drawLine(xc, yc, xc + 200, yc + 100);
	//drawLine(xc, yc, xc + 400, yc + 100);

	////////////////////////////////////////

	//No funcionan, fuera del primer octante
	//drawLine(xc, yc, xc + 400, yc - 300); // En este caso y no baja de su origen "yc"
	//drawLine(xc, yc, xc - 200, yc + 100);
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
