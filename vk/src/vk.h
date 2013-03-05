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
  * Everything here is speculation and psuedocode.
  *
  */


#include "ofMain.h"


class vk : public ofBaseApp{

  public:
    void setup();
    void update();
	
    // this is where all comms with command happens for things like launch approval
    void receiveInstructions() {};
    
	// flight operation and navigation stuff
    void preflightCheck() {};
    void checkWeapons() {};
    void waitForClearance() {};
    void takeoff();
    void exitAirspace() {};
    void setDestination() {};
    void flyToDestination() {};
    
    // target aquisition and analysis
    void aquireTarget();
    void identifyTarget();
    void isTargetOnKillList();
    void isTargetHostile();
    void evaluateThreat();
    
    // the drone has decided to kill someone
    void kill();
    
    // after action
    void escape();
    void flyHome();
    void land();
    
    
    // variables
    bool authorized_to_launch, approved_for_mission;
};
