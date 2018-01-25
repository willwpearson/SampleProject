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
}
