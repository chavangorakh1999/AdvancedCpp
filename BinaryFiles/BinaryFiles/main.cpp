//
//  main.cpp
//  BinaryFiles
//
//  Created by Gorakh Chavan on 17/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
    char input[100];
    strcpy(input,"We are good to go.");
    
    fstream file("grc.bin",ios :: binary | ios :: in | ios :: out | ios :: trunc);
    if(!file.is_open())
    {
        cout<<"Error while opening the file";
    }
    else
    {
    int length= strlen(input);
    for(int counter=0 ; counter <= length ; counter ++)
    {
        file.put(input[counter]);
    }
        
        file.seekg(0);
        char ch;
        while(file.good())
        {
            file.get(ch);
        }
    }
    return 0;
}
