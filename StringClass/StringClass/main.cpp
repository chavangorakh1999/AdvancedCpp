//
//  main.cpp
//  StringClass
//
//  Created by Gorakh Chavan on 12/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    string name("Gorakh");
    name.append(" Chavan");
    cout<<name<<endl;
    
    name.insert(0,"Mr. ");//Declare first position as starting point followed by string you want to enter
    cout<<name<<endl;
    
    cout<<name.substr(4)<<endl;//it takes the parameter from where you want to get substring
    
    name.erase(0,4);//it takes the interval from where you want to erase the content
    cout<<name<<endl;
    
    
    return 0;
}
