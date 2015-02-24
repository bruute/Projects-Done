//Yakov Leonov
//Operations Systems Project 2
//Section 02
//Header.h

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//initialise all readers and writers to zero
int FirstWriter = 0;
int SecondWriter = 0;
int FirstReader = 0;
int SecondReader = 0;
int ThirdReader = 0;

//used as a signal
int wrt = 1;

//mutex
int amutex = 1;

//reader counter

int ReaderCount = 0;

//writer counter
int WriterCount = 0;

//lock signal
void wait(int s)
{
    s<=0;
    
    s--;
}

void signal(int x)
{
    x++;
}

// writer 1 job
void writer1 () {
    
    switch(FirstWriter)
    {
        case 0 : FirstWriter++; break;
        case 1 : FirstWriter++; break;
        case 2 : FirstWriter++; break;
        case 3 : FirstWriter++; break;
        case 4 : wait(amutex);
            if (WriterCount==1)
            {
                cout<<"Writer 1 can not enter [Critical Section] No more than one writer in critical section at once!"<<endl;
                wait(wrt);}
            else{
                signal(amutex);
                cout<<"Writer 1 entering [Critical Section]."<<endl<<"There are "<<ReaderCount<<" readers in [Critical Section]."<<endl;
                if (WriterCount==0)
                    cout<<"There is 1 writer in the [Critical Section].\n"<<endl;
                WriterCount++;FirstWriter++;}
            break;
            
        case 5 : wait (amutex);
            WriterCount--;
            if (WriterCount ==0) signal(wrt);
            signal(amutex);
            cout<<"Writer 1 exiting [Critical Section].\n"<<endl;
            if (ReaderCount == 0 && WriterCount == 0)
                cout<<"[Critical Section] is empty."<<endl;
            else if ( ReaderCount == 1 || WriterCount == 1)
                cout<<"There is still a process in the [Critical Section].\n"<<endl;
            FirstWriter++;
            break;
        case 6 : FirstWriter++; break;
        case 7 : FirstWriter++; break;
        case 8 : FirstWriter=0; break;
    }
}
// writer 2 job
void writer2 () {
    
    switch(SecondWriter)
    {
        case 0 : SecondWriter++; break;
        case 1 : SecondWriter++; break;
        case 2 : SecondWriter++; break;
        case 3 : SecondWriter++; break;
        case 4 : wait(amutex);
            if (WriterCount==1)
            {
                cout<<"Writer 2 can not enter [Critical Section] No more than one writer in [Critical Section] at once!"<<endl;
                wait(wrt);}
            else{
                signal(amutex);
                cout<<"Writer 2 entering [Critical Section]."<<endl<<"There are "<<ReaderCount<<" readers in [Critical Section]"<<endl;
                if (WriterCount==0)
                    cout<<"There is 1 writer in the [Critical Section].\n"<<endl;
                WriterCount++;SecondWriter++;}
            break;
            
        case 5 : wait (amutex);
            WriterCount--;
            if (WriterCount ==0) signal(wrt);
            signal(amutex);
            cout<<"Writer 2 exiting [Critical Section]."<<endl;
            if (ReaderCount == 0 && WriterCount == 0)
                cout<<"[Critical Section] is empty.\n"<<endl;
            else if ( ReaderCount == 1 || WriterCount == 1)
                cout<<"There is still a process in [Critical Section].\n"<<endl;
            SecondWriter++;
            break;
        case 6 : SecondWriter++; break;
        case 7 : SecondWriter++; break;
        case 8 : SecondWriter=0; break;
    }
}
//reader 1 job
void reader1 () {
    switch(FirstReader)
    {
        case 0 : FirstReader++; break;
        case 1 : FirstReader++; break;
        case 2 : FirstReader++; break;
        case 3 : FirstReader++; break;
        case 4 : FirstReader++; break;
        case 5 : wait(amutex);
            if (ReaderCount==1 && WriterCount==1)
            {
                cout<<"Reader 1 can not enter [Critical Section] No more than two readers in [Critical Section] at once!"<<endl;
                wait(wrt);}
            else{
                signal(amutex);
                cout<<"Reader 1 entering [Critical Section]."<<endl<<"There are "<<WriterCount<<" writers in [Critical Section]."<<endl;
                if (ReaderCount==0)
                    cout<<"There is 1 reader in the [Critical Section].\n"<<endl;
                else if (ReaderCount==1)
                    cout<<"There are 2 readers in the [Critical Section].\n"<<endl;
                ReaderCount++;FirstReader++;}
            break;
            
        case 6 : wait (amutex);
            ReaderCount--;
            if (ReaderCount ==0) signal(wrt);
            signal(amutex);
            cout<<"Reader 1 exiting [Critical Section].\n"<<endl;
            if (ReaderCount == 0 && WriterCount == 0)
                cout<<"[Critical Section] is empty."<<endl;
            else if ( ReaderCount == 1 || WriterCount == 1)
                cout<<"There is still a process in the [Critical Section].\n"<<endl;
            FirstReader++;
            break;
        case 7 : FirstReader++; break;
        case 8 : FirstReader=0; break;
    }
}
//reader 2 job
void reader2 () {
    
    switch(SecondReader)
    {
        case 0 : SecondReader++; break;
        case 1 : SecondReader++; break;
        case 2 : SecondReader++; break;
        case 3 : SecondReader++; break;
        case 4 : SecondReader++; break;
        case 5 : wait(amutex);
            if (ReaderCount==1 && WriterCount==1)
            {
                cout<<"Reader 2 can not enter [Critical Section] No more than two readers in [Critical Section] at once!"<<endl;
                wait(wrt);}
            else {
                signal(amutex);
                cout<<"Reader 2 entering [Critical Section]."<<endl<<"There are "<<WriterCount<<" writers in [Critical Section]."<<endl;
                if (ReaderCount==0)
                    cout<<"There is 1 reader in the [Critical Section].\n"<<endl;
                else if (ReaderCount==1)
                    cout<<"There are 2 readers in the [Critical Section].\n"<<endl;
                ReaderCount++;SecondReader++ ;}
            break;
            
        case 6 : wait (amutex);
            ReaderCount--;
            if (ReaderCount ==0) signal(wrt);
            signal(amutex);
            cout<<"Reader 2 exiting [Critical Section]."<<endl;
            if (ReaderCount == 0 && WriterCount == 0)
                cout<<"[Critical Section] is empty.\n"<<endl;
            else if ( ReaderCount == 1 || WriterCount == 1)
                cout<<"There is still a process in the [Critical Section].\n"<<endl;
            SecondReader++;
            break;
        case 7 : SecondReader++; break;
        case 8 : SecondReader=0; break;
    }
    
}
//reader 3 job
void reader3 ()
{
    switch(ThirdReader)
    {
        case 0 : ThirdReader++; break;
        case 1 : ThirdReader++; break;
        case 2 : ThirdReader++; break;
        case 3 : ThirdReader++; break;
        case 4 : ThirdReader++; break;
        case 5 : wait(amutex);
            if (ReaderCount==1&& WriterCount==1)
            {
                cout<<"Reader 3 can not enter [Critical Section] No more than two readers in [Critical Section] at once!"<<endl;
                wait(wrt);}
            else{
                signal(amutex);
                cout<<"Reader 3 entering [Critical Section]."<<endl<<"There are "<<WriterCount<<" writers in [Critical Section]."<<endl;
                if (ReaderCount==0)
                    cout<<"There is 1 reader in the [Critical Section].\n"<<endl;
                else if (ReaderCount==1)
                    cout<<"There are 2 readers in the [Critical Section].\n"<<endl;
                ReaderCount++; ThirdReader++ ;}
            break;
            
        case 6 : wait (amutex);
            ReaderCount--;
            if (ReaderCount ==0) signal(wrt);
            signal(amutex);
            cout<<"Reader 3 exiting [Critical Section]."<<endl;
            if (ReaderCount == 0 && WriterCount == 0)
                cout<<"[Critical Section] is empty.\n"<<endl;
            else if ( ReaderCount == 1 || WriterCount == 1)
                cout<<"There is still a process in the [Critical Section].\n"<<endl;
            ThirdReader++;
            break;
        case 7 : ThirdReader++; break;
        case 8 : ThirdReader=0; break;
    }
}


#endif