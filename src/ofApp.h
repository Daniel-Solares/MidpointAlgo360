#pragma once

#include "ofMain.h"
#include "FrameBuffer.h"

class ofApp : public ofBaseApp{

	public:

		int xc = ofGetWidth() / 2;
		int yc = ofGetHeight() / 2;

		float x2;
		float y2;

		int LongitudDeLinea = 350;
		FrameBuffer frameBuffer;

		void setup();
		void update();
		void draw();

		void drawLine(int xo, int yo, int x1, int y1) {
			int dy = y1 - yc;
			int dx = x1 - xc;

			int deltaE = 2*dy - 2*dx;
			int deltaNE = 2 * dy;

			int P = dy*2 - dx;

			int x = xo;
			int y = yo;
			frameBuffer.putPixel(xo, yo, ofColor::red);

			while (x <= x1) {
				x = x + 1; // siempre va a avanzar en x
				if (P <= 0) {
					//P = P + deltaE; // esto estaba en mis apuntes pero no funciona
					P = P + dy;
				}
				else if (P > 0) {
					//P = P + deltaNE;
					y = y + 1;
					P = P - dx;
				}
				frameBuffer.putPixel(x, y, ofColor::red);
			}
		}

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
