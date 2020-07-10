#include<iostream>
#include<string>
using namespace std;
#include "class.cpp"

int main()
{
    MyClass<string>ob1("GRC");
    MyClass<int>ob2(69);

    ob1.WhatYouGot();
    ob2.WhatYouGot();

    return 0;
}