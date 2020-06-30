#include<iostream>
using namespace std;

template <typename genere> void display(genere x)
{
    cout<<"Inside generic function"<<endl;
    cout<<"You just passed "<< x <<endl;
}

void display(int x)
{
    cout<<"Inside normal function"<<endl;
    cout<<"You just passed "<< x <<endl;
}

template <typename t1 ,typename t2> void Display(t1 x, t2 y)
{
    cout<<"First type "<< x <<endl;
    cout<<"Second type "<< y <<endl;
}

int main()
{
    display(10);
    display(1.5);
    display("GRCSR");
    Display(1.5,"GRC");

    return 0;
}