#include<iostream>
#include<string.h>
using namespace std;
#include "class.cpp"

int main()
{
    myClass<string> m("GRC","SR");
    m.whatYouGot();
    MyClass <> ob1("GRC",15);
    ob1.WhatYouGot();
    MyClass <float> ob2(20.4,4);
    ob2.WhatYouGot();
    return 0;

}