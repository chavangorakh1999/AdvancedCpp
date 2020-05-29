//
//  main.cpp
//  VoidPointer
//
//  Created by Gorakh Chavan on 29/05/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include<iostream>
using namespace std;
int main() {
    int number=10;
    float variable=0.5;
    int *int_pointer;//this is integer type of pointer
    void *void_pointer;//this is void type of pointer.
    int_pointer=&number;//Assigning number variable to integer type pointer.
    void_pointer=&number;//Assigning number variable to void type pointer.
    cout<<*int_pointer<<endl;//printing value of number variable using int_pointer.
    cout<<*(int*)void_pointer<<endl;//printing Value of number variable using void_pointer.
    //int_pointer=&variable;// Cannot assign cha type variable to int type pointer.
    void_pointer=&variable;//Assigning char type variable to void type pointer.
    cout<<*(float*)void_pointer;//printing value of variable.
return 0; }
