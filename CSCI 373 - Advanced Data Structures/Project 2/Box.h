#include<iostream>

using namespace std;

#ifndef BOX_H
#define BOX_H

//Class Template
template <class Project2>
class Box
{
    
public:
    Box();
    
    //+operator overloader
    Project2 operator+(Box);
    
    //Function used to get length
    Project2 GetLength();
    
    //Function used to get height
    Project2 GetHeight();
    
    //Function used to set length
    Project2 SetLength();
    
    //Function used to set width
    Project2 SetWidth();
    
    //Function used to set height
    Project2 SetHeight();
    
    //Function used to print/output
    void Print();
    
    //Function used to add a door to the box
    void AddDoor();
    
    //Function used to add a window to the box
    void AddWindow();
    
private:
    //length
    Project2 length;
    
    //width
    Project2 width;
    
    //height
    Project2 height;
    
    //door
    int sideDoor;
    
    //window
    int sideWindow;
    
};

#endif

// Definition of +Operator function. Chooses whether to add length or add height depending on what the user chose
template <class Project2> Project2 Box<Project2>::operator+(Box R){
    
    return length + length;
    return height + height;
    
}

//Definition of Constructor
template <class Project2>  Box<Project2>::Box()
{
    length;
    width;
    height;
}

// Definition of Getlength function. Returns length
template <class Project2> Project2 Box<Project2>::GetLength()
{
    return length;
    
}

// Definition of GetHeight function. Returns height
template <class Project2> Project2 Box<Project2>::GetHeight()
{
    return height;
    
}

//Definition of Print function. Will print the length, width, height and where the door/window will be placed
template <class Project2> void Box<Project2>::Print()
{
    cout<<"Length: "<<length<<endl;
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl;
    
    switch (sideDoor)
    {
        case 0 : cout<<"->You have chosen not to place a door on any side<-"<<endl; break;
        case 1 : cout<<"->You have chosen to place the door on the left side of the box<-"<<endl; break;
        case 2 : cout<<"->You have chosen to place the door on the right side of the box<-"<<endl; break;
        case 3 : cout<<"->You have chosen to place the door on the front side of the box<-"<<endl; break;
        case 4 : cout<<"->You have chosen to place the door on the back side of the box<-"<<endl; break;
            
        default: cout<<"ERROR. RUN PROGRAM AGAIN!!!"<<endl;
    }

    switch (sideWindow)
    {
        case 0 : cout<<"->You have chosen not to place a window on any side<-"<<endl; break;
        case 1 : cout<<"->You have chosen to place the window on the left side of the box<-"<<endl; break;
        case 2 : cout<<"->You have chosen to place the window on the right side of the box<-"<<endl; break;
        case 3 : cout<<"->You have chosen to place the window on the front side of the box<-"<<endl; break;
        case 4 : cout<<"->You have chosen to place the window on the back side of the box<-"<<endl; break;
            
        default: cout<<"ERROR. RUN PROGRAM AGAIN!!!"<<endl;
    }

}
//Defintion of SetLength function. Asks user to set length
template <class Project2> Project2 Box<Project2>::SetLength()
{
    cout<<"Length: ";
    cin>>length;
    return length;
    
}

//Definition of SetWidth function. Asks user to set width
template <class Project2> Project2 Box<Project2>::SetWidth()
{
    cout<<"Width: ";
    cin>>width;
    return width;
}

//Definition SetHeight function. Asks user to set height
template <class Project2> Project2 Box<Project2>::SetHeight()
{
    cout<<"Height: ";
    cin>>height;
    return height;
}

//Defintion of AddDoor function. Asks user if they want to add a door to their box. Gives clear direction to the user on how to choose a side
template <class Project2> void Box<Project2>::AddDoor()
{
   
    cout<<"\nWhere would you like to place the door? "<<endl;
    cout<<"\nPlease write: 0 for none, 1 for left, 2 for right, 3 for front, or 4 for back to specify which side"<<endl;
    cin>>sideDoor;
    
    switch (sideDoor)
    {
        case 0 : cout<<"->You have chosen not to place a door on any side<-"<<endl; break;
        case 1 : cout<<"->You have chosen to place the door on the left side of the box<-"<<endl; break;
        case 2 : cout<<"->You have chosen to place the door on the right side of the box<-"<<endl; break;
        case 3 : cout<<"->You have chosen to place the door on the front side of the box<-"<<endl; break;
        case 4 : cout<<"->You have chosen to place the door on the back side of the box<-"<<endl; break;
            
        default: cout<<"ERROR. RUN PROGRAM AGAIN!!!"<<endl;
    }
}

//Defintion of AddWindow function.  Asks user if they want to add a window to their box. Gives clear direction to the user on how to choose a side.
template <class Project2> void Box<Project2>::AddWindow()
{
    
    cout<<"\nWhere would you like to place the window? "<<endl;
    cout<<"\nPlease write: 0 for none, 1 for left, 2 for right, 3 for front, or 4 for back to specify which side"<<endl;
    cin>>sideWindow;
    
    switch (sideWindow)
    {
        case 0 : cout<<"->You have chosen not to place a window on any side<-"<<endl; break;
        case 1 : cout<<"->You have chosen to place the window on the left side of the box<-"<<endl; break;
        case 2 : cout<<"->You have chosen to place the window on the right side of the box<-"<<endl; break;
        case 3 : cout<<"->You have chosen to place the window on the front side of the box<-"<<endl; break;
        case 4 : cout<<"->You have chosen to place the window on the back side of the box<-"<<endl; break;
            
        default: cout<<"ERROR. RUN PROGRAM AGAIN!!!"<<endl;
    }
}
