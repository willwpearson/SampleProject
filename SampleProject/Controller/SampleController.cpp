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
    
    arrayLoop();
}

void SampleController :: arrayLoop()
{
    int numbers [10][10];
    
    for(int i = 0; i < 10; i ++)
    {
        cout << "Counting by " << i + 1 << endl;
        
        for(int j = 0; j < 10; j++)
        {
            numbers[i][j] = (i + 1) * (j + 1);
            
            cout << "Count: " << numbers[i][j] << endl;
        }
    }
}
