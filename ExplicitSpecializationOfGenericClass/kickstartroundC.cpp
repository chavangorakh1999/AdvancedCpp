#include<iostream>
using namespace std;


int main()
{
    long long int n;
    int test_no,starter;
    int arr[100000];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
       cin>>test_no>>starter;
    int ans_counter=0,decrease_counter=0;
        for(int i=0;i<test_no;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<test_no;i++)
        {
            if(arr[i]==arr[i-1]-1)
            {
                decrease_counter=decrease_counter+1;
            }
            else
            {
                decrease_counter=0;
            }
            if(arr[i]==1 and decrease_counter>=starter-1)
            {
                ans_counter=ans_counter+1;
            }
        }
        cout<<"Case #1: "<<ans_counter;
        
        
    }
    
    
}