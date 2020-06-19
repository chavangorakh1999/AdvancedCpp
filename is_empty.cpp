#include<iostream>
#include<type_traits>

using namespace std;

//Class with NO arguments. 

class check1
{
};

//Class with local variable declared inside it.

class check2
{
int variable;
};

//Class with global variable declared inside it.

class check3
{
static int variable;
};

int main()
{
cout<<boolalpha;

/*
Code followed below prints wheather the class is empty or not.
*/

cout<<"Is this class check1 empty :"<< is_empty <check1> :: value <<"\n";

cout<<"Is this class check2 empty :"<< is_empty <check2> :: value <<"\n";

cout<<"Is this class check3 empty :"<< is_empty <check3> :: value <<"\n";

return 0;
}