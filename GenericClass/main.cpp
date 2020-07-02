#include<iostream>
#include<string.h>
using namespace std;
#include "class.cpp"

int main()
{
    myClass<string> m("GRC","SR");
    m.whatYouGot();

    return 0;
}