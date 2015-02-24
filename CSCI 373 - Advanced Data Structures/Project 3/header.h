// CSCI-373 Project 1
// Created by Yakov Leonov on 10/14/14.
// bruute
// Compiled in Xcode 6.1.1
// header.h

#include <cstdlib>
#include <iostream>
#include <unordered_map>

using namespace std;

#ifndef HEADER_H
#define HEADER_H

class room
{
protected:
    
    //length
    int length;
    
    //width
    int width;
    
public:
    
    room();
    
    room(int l, int w): length(l), width(w){};
    
    //down pointer
    room *Downptr;
    
    //up pointer
    room *Upptr;
    
    //right pointer
    room *Rightptr;
    
    //left pointer
    room *Leftptr;
    
    //a basic pointer
    room *ptr;
    
    //function to calculate area
    int area () {return length*width;}
    
    //function to calculate kitchen which is in the form of a triangle
    int areaTriangle () {return length*width/2;}
};

class home : public room
{
public:
    
    //area definition
    int area;
    
    //area of triangle room
    int areaTriangle;
    
    home(int a, int b): area(b) {};
    
    home();
};










#endif
