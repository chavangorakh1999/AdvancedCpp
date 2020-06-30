#include<iostream>
using namespace std;

template <typename genere> void display(genere x)
{
    cout<<"You just passed "<< x <<endl;
}

int main()
{
    display(10);
    display(1.5);
    display("GRCSR");

    return 0;
}