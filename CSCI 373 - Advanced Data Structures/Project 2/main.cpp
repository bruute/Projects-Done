// CSCI-373 Project 2
//
// Created by Yakov Leonov on 10/25/14.
// bruute
// Compiled in Xcode 6.0.1

#include<iostream>
#include "Box.h"

using namespace std;

int main()

{
    Box<float> Box1;
    string box1;
    
    Box<float> Box2;
    string box2;
    
    cout<<"----------------------BOX  1------------------------"<<endl;
    
    cout<<"What is the name of the first box? "<<endl;
    cin>>box1;
    
    cout<<"For first box '"<<box1<<"', Please set the length, width, and height."<<endl;
    
    Box1.SetLength();
    Box1.SetWidth();
    Box1.SetHeight();
    Box1.AddDoor();
    Box1.AddWindow();
    
    cout<<"\n---------------------BOX  2------------------------"<<endl;
    
    cout<<"What is the name of the second box? "<<endl;
    cin>>box2;
    
    cout<<"For second box '"<<box2<<"', Please set the length, width, and height."<<endl;
    
    Box2.SetLength();
    Box2.SetWidth();
    Box2.SetHeight();
    Box2.AddDoor();
    Box2.AddWindow();
    
    cout<<"\n--------------------COMBINATION---------------------"<<endl;
    
    int combo;
    
    cout<<"How would you like to combine the two boxes?"<<endl;
    cout<<"Type 1 to stack them on top of each other, or type 2 to place them side by side"<<endl;
    cin>>combo;
    
    
    cout<<"\n----------------------SUMMARY-----------------------"<<endl;
    
    cout<<"The dimensions of the first box '"<<box1<<"', are: "<<endl;
    Box1.Print();
    
    cout<<"\nThe dimensions of the second box '"<<box2<<"', are: "<<endl;
    Box2.Print();
    
    switch (combo)
    {
        case 1 : cout<<"\nYou have chosen to stack the two boxes on top of each other, the new combined height is: "<<Box2.GetHeight() + Box1.GetHeight()<<endl; break;
            
        case 2 : cout<<"\nYou have chosen to place the two boxes side by side, the new combined length is: "<<Box2.GetLength() + Box1.GetLength()<<endl; break;
            
        default: cout<<"ERROR. RUN PROGRAM AGAIN!!!"<<endl;
    }
    
    
    return 0;
};