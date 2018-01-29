//
//  Controller.cpp
//  MyFirstCPP
//
//  Created by Schimel, Dustin on 1/23/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    //cout << "Look I am a constructor :D" << endl;
}

void Controller :: start()
{
    //cout << "I am in the start method." << endl;
    
    string name = "Dustin Schimel";
    
    cout << name << endl;
    
    for (int index = 13; index < 32; index++)
    {
        cout << index << endl;
    }
    
    cout << &name << endl;
    
    cout << "I" << " like" << " green" << endl;
    
    
}
