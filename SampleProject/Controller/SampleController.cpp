//
//  SampleController.cpp
//  SampleProject
//
//  Created by Pearson, William on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "SampleController.hpp"

using namespace std;

SampleController :: SampleController()
{
    
}

void SampleController :: start()
{
    for(int index = 0; index < 10; index ++)
    {
        cout << "This is the " << index + 1 << "nth time in the loop" << endl;
    }
    
    consoleOutput();
    arrayLoops();
}

void SampleController :: consoleOutput()
{
    int number = 1;
    double decimal = 2.3;
    string name = "William Pearson";
    
    cout << "My name is " << name << "." << endl;
    
    for(int index = 13; index < 32; index ++)
    {
        cout << index;
    }
    
    cout << endl;
    
    cout << &name << endl;
    
    cout << "An example of an int is: " << number << ". An example of a double is: " << decimal << "." << endl;
}

void SampleController :: arrayLoops()
{
    //Int array
    int numbers [10][10];
    
    for(int i = 0; i < 10; i ++)
    {
        cout << "Counting up by " << i + 1 << "s" << endl;
        
        for(int j = 0; j < 10; j++)
        {
            numbers[i][j] = (i + 1) * (j + 1);
            
            cout << "Count: " << numbers[i][j] << endl;
        }
    }
    
    for(int j = 9; j >= 0; j --)
    {
        cout << "Counting down by " << j + 1 << "s" << endl;
        
        for(int i = 9; i >= 0; i --)
        {
            cout << "Count: " << numbers[i][j] << endl;
        }
    }
    
    //Double array
    double decimals [3];
    
    for(int i = 0; i < 3; i ++)
    {
        
    }
}
