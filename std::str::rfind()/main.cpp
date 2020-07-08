#include<iostream>
#include<string>
using namespace std;

void findString(string line,string c)
{
    size_t gotThat;

    gotThat=line.rfind(c);

    if(gotThat==string::npos)
    {
        cout<<"char not found in string given!"<<endl;
        
    }
    else
    {
        cout<<"Char fount at position "<<gotThat<<endl;
    }
    

}

int main()
{
    string line("He I got you");
    string ch("you");

    findString(line,ch);
}

