// CSCI-373 Project 1
// Created by Yakov Leonov on 10/14/14.
// bruute
// Compiled in Xcode 6.1.1
// main.cpp


/* Logic: Basically, you have 11 entries for the entire house. This includes all the rooms given
          to us in the project details plus the entire floor area. I drew out a map of the house
          and gave each room a specific size. In order to manipulate linked lists. I had the list 
          go down starting from the hallway in the middle then moving left into dining area, then 
          going down and an back up on the right side of the house like a U shape. Then I had all 
          the entries set up in a hashtable where I would later use the hashtables again to pull
          the correct info in order to show the user the size of each entry. 
 */
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include "header.h"

using namespace std;

int main(int argc, char *argv[])
{
    //sets up for hashtable. String/name of room on left side and number/size of room on the right
    unordered_map<string, int> roomHashtable;
    
    //right side of house
    
    //hallway size
    room hallway (50, 10);
    
    //living room size
    room living (10 ,10);
    
    //half bathroom
    room halfbath (10, 5);
    
    //master bedroom - bedroom1
    room masterBedroom (15, 10);
    
    //bedroom2
    room bedroom2 (10, 10);
    
    //full bathroom 1
    room fullBath1(10, 10);
    
    
    //left side of house
    
    //dining room
    room dining (20, 10);
    
    //kitchen - triangle
    room kitchen (10, 10);
    
    //full bathroom 2
    room fullBath2 (10, 10);
    
    //bedroom1
    room bedroom1 (10, 10);
    
    // Entire house floor
    room floor(50, 30);
    
    
    //we start in the hallway and we move down using the down pointer
    //we start in the left side of the house first and move our way down then back up like a U shape
    floor.ptr = &hallway;
    
    hallway.Leftptr = &dining;
    
    dining.Downptr = &kitchen;
    
    kitchen.Downptr = &fullBath1;
    
    fullBath1.Downptr = &bedroom1;
    
    bedroom1.Rightptr = &fullBath2;
    
    fullBath2.Upptr = &bedroom2;
    
    bedroom2.Upptr = &masterBedroom;
    
    masterBedroom.Upptr = &halfbath;
    
    halfbath.Upptr = &living;
    
    living.ptr = &living;
    
    //function to map out the hashtable
    string names[11]     = {"Floor", "Hallway", "Living", "Dining", "HB",  "Kitchen" , "FB1", "MB", "Bedroom1", "Bedroom2",  "FB2"};
    
    int values[11] = {floor.area(), hallway.area(), (living.ptr)->area(),(dining.Downptr)->area(), (halfbath.Upptr)->area(), (kitchen.Downptr)->areaTriangle(), (fullBath1.Downptr)->area(), (masterBedroom.Upptr)->area(), (bedroom1.Rightptr)->area(), (bedroom2.Upptr)->area(), (fullBath2.Upptr)->area()};
    
    // puts all those entry into the hashtable
    for(int entry = 0; entry < 11; entry++)
    {
        roomHashtable.emplace(names[entry], values[entry]);
    }
    
    //cout statements to tell the size of the rooms. Uses hashtables to calculate
    cout << "Floor Size: " <<roomHashtable["Floor"]<<endl;
    cout << endl;
    
    cout << "Hallway Size: "
    <<roomHashtable["Hallway"]<<endl;
    cout << endl;
    
    cout << "Living Room Size: "
    <<roomHashtable["Living"]<<endl;
    cout << endl;
    
    cout << "Dining Room Size: "
    <<roomHashtable["Dining"]<<endl;
    cout << endl;
    
    cout << "Half Bathroom Size: "
    <<roomHashtable["HB"]<<endl;
    cout << endl;
    
    cout << "Triangular Kitchen Size: "
    <<roomHashtable["Kitchen"]<<endl;
    cout << endl;
    
    cout << "Full Bathroom1 Size: "
    <<roomHashtable["FB1"]<<endl;
    cout << endl;
    
    cout << "Master Bedroom Size: "
    <<roomHashtable["MB"]<<endl;
    cout << endl;
    
    cout << "Bedroom1 Size: "
    <<roomHashtable["Bedroom1"]<<endl;
    cout << endl;
    
    cout << "Bedroom2 Size: "
    <<roomHashtable["Bedroom2"]<<endl;
    cout << endl;
    
    cout << "Full Bathroom2 Size: "
    <<roomHashtable["FB2"]<<endl;
    cout << endl;
    
    system ("pause");
    return 0;
    
}