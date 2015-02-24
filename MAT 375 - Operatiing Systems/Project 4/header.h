//Yakov Leonov
//Operating Systems Project 4
//Section 02
//header.h

#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

#ifndef HEADER_H
#define HEADER_H

int i;
int j=0;
int k;
int m;
int indicator = 0;
int top = 0;
int faultCounter;

//LRU page-replacement algorithm
void lru(int a2[], int a1[], int length, int frames)
{
    for(i=0; i<length; i++)
    {
        for (k=0 ; k<frames; k++)
        {
            if(a1[k] == a2[i])
            {
                indicator = 1;
                break;
            }
        }
        
        cout<<"\n"<<a2[i]<<" -> ";
        
        if(j != frames && indicator != 1)
        {
            a1[top] = a2[i];
            j++;
            
            if(j != frames)
                top++;
        }
        else
        {
            if (indicator != 1)
            {
                for(k = 0; k < top; k++)
                {
                    a1[k] = a1[k+1];
                }
                
                a1[top] = a2[i];
            }
            
            if(indicator == 1)
            {
                for(m = k; m < top; m++)
                {
                    a1[m] = a1[m+1];
                }
                
                a1[top] = a2[i];
            }
        }
        for(k=0; k<frames; k++)
        {
            printf(" %d",a1[k]);
        }
        
        if(indicator == 0)
        {
            faultCounter++;
        }
        else
            indicator=0;
    }
    cout<<"\n\nThere were/was a total of: "<<faultCounter++<<" faults";
}


// FIFO page-replacement algorithm
void fifo(int a2[], int a1[], int length, int frames)
{
    
    for(i=0; i<length; i++)
    {
        for (k=0; k<frames; k++)
        {
            if(a1[k] == a2[i])
                indicator = 1;
        }
        
        if(indicator == 0)
        {
            cout<<"\n"<<a2[i]<<" -> ";
            
            a1[j] = a2[i];
            j++;
            
            for(k=0;k<frames;k++)
            {
                cout<<a1[k];
            }
            faultCounter++;
        }
        else
        {
            indicator = 0;
            cout<<"\n"<<a1[i]<<" -> ";
            for(k=0; k<frames; k++)
            {
                cout<<a1[k];
            }
        }
        if(j==frames)
            j=0;
    }
    cout<<"\n\nThere were/was a total of: "<<faultCounter++<<" faults";
}

#endif