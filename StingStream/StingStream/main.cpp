//
//  main.cpp
//  StingStream
//
//  Created by Gorakh Chavan on 20/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    string number="44";
    
    stringstream sso;
    sso << number;
    int input;
    sso >> input;
    
    cout<<input+2<<endl;
    cout<<number+"2"<<endl;
    
    return 0;
}
