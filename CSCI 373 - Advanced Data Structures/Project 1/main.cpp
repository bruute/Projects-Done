//  CSCI-373 Project 1
//
//  Created by Yakov Leonov on 9/22/14.
//  bruute
//  Compiled in Xcode 5.1.1

#include <iostream>
#include <iomanip>
using namespace std;

// Defines class for data types
class ClassSizeDataTypes

// Public class
{
public:
    int INTEGER;
    long LONG;
    char CHAR;
    float FLOAT;
    double DOUBLE;
    bool BOOL;
}

SizeClass;

// Defines struct for data types
struct StructSizeDataTypes {
    int INTEGER;
    long LONG;
    char CHAR;
    float FLOAT;
    double DOUBLE;
    bool BOOL;
}

SizeStruct;

int main()
{
    // Output like asked on Blackboard
    cout <<
    "This program has been designed by Yakov Leonov for Project 1 for Adv Data Structures \nIns : Professor Aftab Ahmad \nDue Date : September 22nd 2014 \nSubmitted On : September 22nd 2014"<< endl<<endl;
    
   // Output Size of Built in data types
    cout<< "Built In Size: " <<endl;
    cout<< "integer: "<< sizeof(int) <<" long: "<<sizeof(long)<<" char: "<< sizeof(char)<<" float: "<<sizeof(float)<<" double: "<<sizeof(double)<<" bool: "<<sizeof(bool)<<endl<<endl;
    
    // Output Size of data types in struct
    cout<< "Struct Size: "<< endl;
    cout<< "integer: "<< sizeof(SizeStruct.INTEGER) <<" long: "<<sizeof(SizeStruct.LONG)<<" char: "<< sizeof(SizeStruct.CHAR)<<" float: "<<sizeof(SizeStruct.FLOAT)<<" double: "<<sizeof(SizeStruct.DOUBLE)<<" bool: "<<sizeof(SizeStruct.BOOL)<<endl<<endl;

   // Output suze of data tpes in class
    cout<< "Class Size: "<<endl;
    cout<< "integer: "<< sizeof(SizeClass.INTEGER) <<" long: "<< sizeof(SizeClass.LONG)<<" char: "<< sizeof(SizeClass.CHAR)<<" float: "<<sizeof(SizeClass.FLOAT)<<" double: "<<sizeof(SizeClass.DOUBLE)<<" bool: "<<sizeof(SizeClass.BOOL) <<endl;
    

}
