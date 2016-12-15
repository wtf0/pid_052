//
//  seq
//  BodilyInteraction_Quick_mockup
//
//  Created by Alex on 02/03/16.
//
//

#include "butPres.h"

butPres::butPres(){
    
}

void butPres::setStartTime(float timeOn){
    startTime = timeOn;
}

void butPres::setEndTime(float timeOff){
    endTime = timeOff;
    interval = endTime - startTime;
}

void butPres::setInputNumber(int inputNum){
    input = inputNum;
}

float butPres::getEndTime(){
    return endTime;
}

float butPres::getInterval(){
    return interval;
}
int butPres::getInputNumber(){
    return input;
}