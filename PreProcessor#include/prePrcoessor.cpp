#include<iostream>
using namespace std;
#include "personclass.cpp"


int main()
{
    person p("grc",21);
    p.display();
    person p("Jay",12);
    p.display();
    return 0;
}