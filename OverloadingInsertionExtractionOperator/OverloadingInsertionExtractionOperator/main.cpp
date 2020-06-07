//
//  main.cpp
//  OverloadingInsertionExtractionOperator
//
//  Created by Gorakh Chavan on 07/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
class Student{
    string name;
    int age;
public:
    Student()
    {
        name="NoName";
        age=0;
    }
    friend ostream &operator << (ostream &output,Student &s);
    friend istream &operator >> (istream &input,Student &s);
};
ostream &operator << (ostream &output,Student &s)
{
    output<<"My Name is "<<s.name<<endl;
    output<<"My Age is "<<s.age<<endl;
    return output;
}
istream &operator >> (istream &input,Student &s)
{
    input>>s.name>>s.age;
    return input;
}


int main()
{
    cout<<"ENTER NAME AND AGE:"<<endl;
    Student s;
    cin>>s;
    cout<<s;
    return 0;
}

