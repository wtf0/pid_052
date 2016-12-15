//
//  seq.h
//  BodilyInteraction_Quick_mockup
//
//  Created by Alex on 02/03/16.
//
//
#pragma once

#include "ofMain.h"
#include "sequence.h"

class butPres{
    
public:
    
    butPres();
    
    void setStartTime(float timeOn);
    void setEndTime(float timeOf);
    void setInputNumber(int intputNum);
    
    float getInterval();
    int getInputNumber();
    float getEndTime();
    
    float interval;
    
    int input;
    
private:
    float startTime;
    float endTime;
};