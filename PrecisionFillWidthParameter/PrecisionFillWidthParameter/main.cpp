//
//  main.cpp
//  PrecisionFillWidthParameter
//
//  Created by Gorakh Chavan on 10/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
//    cout.precision(5);
//    cout<<124.5678<<endl;
//    cout<<"hi"<<endl;
//
//    cout.width(10);
//    cout<<124.5678<<endl;
//    cout.width(10);
//    cout<<"hi"<<endl;
//
//    cout.fill('*');
//
//    cout.width(10);
//    cout<<124.5678<<endl;
//    cout.width(10);
//    cout<<"hi"<<endl;
//
//    cout.setf(ios::left);
//
//    cout.fill('*');
//
//    cout.width(10);
//    cout<<124.5678<<endl;
//    cout.width(10);
//    cout<<"hi"<<endl;
    
    //set flag positive or negative
//    cout.setf(ios :: showpos | ios :: showpoint);
//    cout<<10.4<<endl;
//    cout<<50.9<<endl;
    
    cout.setf(ios :: showpos , ios :: showpos);
    cout.unsetf(ios :: showpos);
    cout<<10.4<<endl;
    cout<<50.9<<endl;
    
    return 0;
}
