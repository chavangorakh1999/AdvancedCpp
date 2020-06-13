//
//  main.cpp
//  FileHandeling
//
//  Created by Gorakh Chavan on 13/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Readme.txt",ios :: in | ios :: out | ios :: trunc);
    if(!file.is_open())
        cout<<"Error finding file";
    else
        file.close();
}
