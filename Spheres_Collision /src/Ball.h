
//
//  Ball.h
//  Spheres_Collision
//
//  Created by Binnie Bruggeman on 22/02/16.
//
//

#pragma once

#include "ofMain.h"

class Ball{
    
public:
    
    Ball();
    
    void setup();
    void update();
    void draw();
    
    //variables
    ofPoint position; //has x, y, z
    ofVec3f speed;
    
    int radius;
    ofColor color;
    
    
private:
    
    
};
