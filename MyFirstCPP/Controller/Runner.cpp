//
//  Runner.cpp
//  MyFirstCPP
//
//  Created by Schimel, Dustin on 1/23/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    Controller app; //How to declare an object and instantiate it
    app.start();
    
    Controller * appPointer = new Controller(); //Only use new when making a pointer / * in this means make a pointer
    appPointer->start();
    (*appPointer).start();  //These two lines are the exact same thing / * in this means get what's at that pointer
    return 0;
}
