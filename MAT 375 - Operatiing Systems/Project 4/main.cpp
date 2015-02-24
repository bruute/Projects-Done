//Yakov Leonov
//Operating Systems Project 4
//Section 02
//main.cpp

#include <iostream>
#include <stdio.h>
#include <ctime>
#include "header.h"
using namespace std;

//main program
int main()
{
    
    int choice;
    
    int length;
    int frames;
    int arr;
    int array1[30];
    int array2[30];
    
    srand(time(NULL));
    
    //number of page frames are randomly picked from 1-7
    frames= (rand()%6)+1;
    
    //asks user to choose whether he/she wants to perfrom LIFO algorithm or LRU algorithm
    cout<<"Please enter your choice:\n";
    cout<<"Press 1 if you want to perform the LRU page-replacement algorithm"<<endl;
    cout<<"Press 2 if you want to perform the FIFO page-replacement algorithm"<<endl;
    
    cin>>choice;
    
    //switch statements for the choice that user chose
    switch(choice)
    {
            
            //Choose LRU
        case 1:
            
            //asks user to enter the length for the array
            cout<<"Enter the length of the array: ";
            cin>>length;
            cout<<"\nYour array contains " <<length<<" numbers."<< endl;
            cout<<"The program randomly chose "<<frames<<" frames"<<endl;
            cout<<"The program also filled your array with random numbers"<<endl;
            cout<<"Populating empty spaces in array with -1"<<endl;
            
            //places random numbers in the array that user just created
            //number of page numbers that are implemented range from 1-10
            for (int j = 0 ;j<length;j++)
            {
                arr =(rand()%9)+1;
                if (arr != arr-1)
                    array2[j]=arr;
                else
                {
                    arr =(rand()%9)+1;
                    array2[j]=arr;
                }
                for(int i=1;i<frames;i++)
                    array1[i]=-1;
            }
            lru(array2, array1, length, frames);
            break;
            
            //Choose FIFO
        case 2:
            
            //asks user to enter the length for the array
            cout<<"Enter the length of the array: ";
            cin>>length;
            cout<<"\nYour array contains " <<length<<" numbers."<< endl;
            cout<<"The program randomly chose "<<frames<<" frames"<<endl;
            cout<<"The program also filled your array with random numbers"<<endl;
            cout<<"Populating empty spaces in array with -1"<<endl;
            
            //places random numbers in the array that user just created
            //number of page numbers that are implemented range from 1-10
            for (int j = 0 ;j<length;j++)
            {
                arr =(rand()%9)+1;
                if (arr != arr-1)
                    array2[j]=arr;
                else
                {
                    arr =(rand()%9)+1;
                    array2[j]=arr;
                }
                for(int i=1;i<frames;i++)
                    array1[i]=-1;
            }
            fifo(array2, array1, length, frames);
            break;
            
        default:
            break;
    }
    cout<<"\nPage Replacement program has finished!"<<endl;
    return(0);
}
