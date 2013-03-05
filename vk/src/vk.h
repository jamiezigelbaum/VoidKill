#pragma once

 /*
  * HELLO
  *
  * This performance, installation, and software work is called Void Kill (). 
  * It's an work of drone fiction; imagining the moment when a software developer
  * sits down and writes software that decides on its own whether or not to take a human life.
  * 
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
    long identifyTarget() {};
    bool isTargetOnKillList(long targetID) {};
    bool isTargetHostile(long targetID) {};
    float evaluateThreat() {};
    
    // decide to kill someone
    bool authorizeMyselfToUseDeadlyForce() {};
    void kill();
    
    // after action
    void escape() {};
    void flyHome() {};
    void land() {};
    
    
    // VARIABLES
    bool authorized_to_launch, approved_for_mission;
    long target;
    float threat_threshold = 87.5; // this is some kind of percentage, if over this kill
};
