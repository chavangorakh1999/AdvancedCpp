//
//  main.cpp
//  Manipulators
//
//  Created by Gorakh Chavan on 12/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<iomanip>
using namespace std;

ostream &rightArrow(ostream &output)
{
    cout<<"Name --->";
    return output;
}
istream &getName(istream &input)
{
    cout<<"Enter your name please :";
    return input;
}

int main()
{
    string name;
    cin>>getName>>name;
    cout<<rightArrow<<name<<endl;
    return 0;
}
