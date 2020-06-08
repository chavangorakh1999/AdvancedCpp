//
//  main.cpp
//  CopyConstructor
//
//  Created by Gorakh Chavan on 08/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
    int age;
    string *name;
    
    Person(string name,int age){
        this->name=new string(name);
        this->age=age;
    }
    Person(const Person &p){
        name=new string(*p.name);
        age=p.age;
    }
    void display()
    {
        cout<<"Your name is :"<<*name<<endl;
        cout<<"Your Age is :"<<age<<endl;
    }
    
};

int main(){
    Person p("GRC",21);
    p.display();
    Person q=p;
    q.display();
    return 0;
    
}
