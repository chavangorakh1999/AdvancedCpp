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
//    fstream file;
//    file.open("Readme.txt",ios :: in | ios :: out | ios :: trunc);
//    if(!file.is_open())
//        cout<<"Error finding file";
//    else
//    {
//        file<<"Just writing string to file"<<endl;
//        file<<"can we do that ?"<<endl;
//
//        file.close();
//    }
//    fstream file;
//    file.open("Readme.txt",ios :: in | ios :: out | ios :: app);
//    if(!file.is_open())
//        cout<<"Error finding file";
//    else
//    {
//        cout<<file.tellg()<<endl;
//        file<<"Just writing string to file"<<endl;
//        file<<"can we do that ?"<<endl;
//        cout<<file.tellg()<<endl;
//        file.close();
//    }
    fstream write_file;
    write_file.open("Readme.txt",ios :: in );
    if(!write_file.is_open())
        cout<<"Error finding file";
    else
    {
        
        cout<<write_file.tellg()<<endl;
        cout<<write_file.tellp()<<endl;
        
//        write_file <<"We can grow together";
        write_file.seekg(5);
        cout<<write_file.tellg()<<endl;
        cout<<write_file.tellp()<<endl;
        
        
        write_file.close();
    }
    
}
