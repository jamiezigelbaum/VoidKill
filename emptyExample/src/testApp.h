#pragma once

 /*
  * HELLO VIEWER
  * HELLO READER
  *
  * This performance is called Void Kill (). 
  *
  * If you are here in person you will see me working at a desk with a computer, 
  * keyboard, etc. writing some software in a gallery at the Spring Break Art Show in New York.
  * Or maybe it's after the performance and you are just seeing the remains, reading a quiet screen.
  *
  * If you are reading this somewhere else, you are perhaps on github, looking at the code
  * on your computer, or reading it some other way after the performance..
  *
  * Github repo https://github.com/jamiezigelbaum/VoidKill
  *
  */



#include "ofMain.h"




class testApp : public ofBaseApp{

  public:
    void setup();
    void update();
		
    void preflightCheck();
    void takeoff();
    void exitAirspace();
    void setDestination();
    

    
};
