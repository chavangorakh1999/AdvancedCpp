//
//  main.cpp
//  RangeBasedFoorLoop
//
//  Created by Gorakh Chavan on 30/05/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> variable = {10, 21,32, 43, 54, 65};//Declaring vector integer variable

    for (auto iterator : variable) //here iterator is auto type iterator and variable is assigned over which the iterator will iterate
        std::cout << iterator << ' ';
      
    std::cout << '\n';
    for (int number : {10, 21,32, 43, 54, 65}) //In this instead of variable we have directly taken braced-init-list
        std::cout << number << ' ';
    return 0;

}
