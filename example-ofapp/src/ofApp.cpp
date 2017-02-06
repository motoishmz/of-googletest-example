#include "ofMain.h"

class ofApp : public ofBaseApp {
  
public:
  
  ofApp()
  {}
  
  void setup() {
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
  }
  
  void update() {
    
  }
  
  void draw() {
    
  }
};



#pragma mark -
#pragma mark main
int main(){
  ofGLWindowSettings settings;
  settings.width = 1600;
  settings.height = 900;
  settings.setGLVersion(2, 1);
  ofCreateWindow(settings);
  
  ofRunApp(new ofApp());
}
