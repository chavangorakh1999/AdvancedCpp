#include<iostream>
using namespace std;
#define Mac 1
#define Linux 2
#define Win 3

#define OS Mac

int main()
{
    #if OS == Win
    cout<<"Using windows"<<endl;
    #endif

    cout<<"Noraml print";

    return 0;
}