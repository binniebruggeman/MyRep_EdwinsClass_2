//
//  Ball.cpp
//  Spheres_Collision
//
//  Created by Binnie Bruggeman on 22/02/16.
//
//

#include "Ball.h"


Ball::Ball() {
    
}


void Ball::setup(){
    position.x = ofRandom(-400,400);
    position.y = ofRandom(-400,400);
    position.z = ofRandom(-400,400);
    
    speed.x = ofRandom(-10,10);
    speed.y - ofRandom(-10, 10);
    speed.z = ofRandom(-10,10);
    
    radius = 50;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}


void Ball::update(){
    if(position.x < -400){
        position.x = -400;
        speed.x *= -1;
    } else if(position.x > 400){
        position.x = 400;
        speed.x *= -1;
    }
    
    if(position.y < -400){
        position.y = -400;
        speed.y *= -1;
    } else if(position.y > 400){
        position.y = 400;
        speed.y *= -1;
    }
    
    if(position.z < -400){
        position.z = -400;
        speed.z *= -1;
    } else if(position.z > 400){
        position.z = 400;
        speed.z *= -1;
    }
    
    position = position + speed;
    
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawSphere(position, radius);
}