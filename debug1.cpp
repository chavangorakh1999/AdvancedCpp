#include<iostream>
using namespace std;
int main()
{
    char a[20];
    int b;
    string c;
    cout<<"do you want another ticket yes/no?";
    cin>>c;
    do
    {   cout<<"enter your name=";
        cin>>a;
        cout<<"enter your age=";
        cin>>b;
        if (a[0]=='k' | a[0]=='a' | a[0]=='r')
        {
            if(b>10)
            {
                cout<<"you can watch movie"<<endl;
            }
        }
        else
        {
        cout<<"you can't see the movie"<<endl;
        }
        cout<<"do you want another ticket yes/no?";
    cin>>c;
        
    }while(c!="no");
    return 0;
    
    
}