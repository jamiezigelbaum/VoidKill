#pragma once

 /*
  * HELLO VIEWER
  * HELLO READER
  *
  * This performance, installation, and softwarae is called Void Kill (). 
  * It was created by Jamie Zigelbaum for the Spring Break Art Show in New York.
  * http://jamiezigelbaum.com
  *
  *
  * If you are here in person you will see me working at a desk with a computer, 
  * keyboard, etc. writing some software in a gallery.
  * 
  * Or maybe it's after the performance and you are just seeing the remains, reading a quiet screen.
  *
  * If you are reading this somewhere else, you are perhaps on github, looking at the code
  * on your computer, or reading it some other way after the performance.
  *
  * Github repo https://github.com/jamiezigelbaum/VoidKill
  * 
  * Everything here is speculation.
  *
  */


#include "ofMain.h"


class vk : public ofBaseApp{

  public:
    void setup();
    void update();
	
	// flight operation and navigation stuff
    void preflightCheck();
    void takeoff();
    void exitAirspace();
    void setDestination();
    void flyToDestination();
    
    // target aquisition and analysis
    void aquireTarget();
    void identifyTarget();
    void isTargetOnKillList();
    void isTargetHostile();
    void evaluateThreat();
    
    //
    void kill();
    
    
    
};
