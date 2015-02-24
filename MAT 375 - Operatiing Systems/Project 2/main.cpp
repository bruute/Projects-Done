//Yakov Leonov
//Operations Systems Project 2
//Section 02
//main.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"
using namespace std;

//main program
int main() 
{
    srand(time(NULL));
    
    int counter;
    
    for(int i=0; i<1000; i++)
    {
        counter = rand()%5+1;
        
        switch (counter)
        {
            case 1 : writer1(); break;
            case 2 : writer2(); break;
            case 3 : reader1(); break;
            case 4 : reader2(); break;
            case 5 : reader3(); break;
        }
    }
    
    return 0;
}

