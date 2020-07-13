// #include<iostream>
// #include<type_traits>
// using namespace std; 
  
// int main() 
// { 

//     typedef std::remove_const<int>::type first_variable; 
    
//     typedef std::remove_const<int* const>::type second_variable; 
    
//     cout << std::boolalpha; 
  
//     cout << "Does first_variable contain const int? "
//          << is_same<int, first_variable>::value 
//          << endl; 
  
   
  
//     cout << "Does second_variable contain const int? "
//          << is_same<int, second_variable>::value 
//          << endl; 
//     return 0; 
// } 

#include <iostream>
using namespace std;
int main()
{
    int arr[10000],count,n;
    cin>>n;
    
    for(int j=0;j<n+1;++j)
    {
        int breaking_day=0;
        cin>>count;
        for(int i=0;i<count;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<count;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
//        for(int i=0;i<count;i++)
//        {
//
//                if((arr[i-1]<arr[i] && i>0 )|| arr[i]==count+1)
//                {
//                breaking_day=breaking_day+1;
//                }
//                else if(i==0 || arr[i+1]<arr[i])
//                {
//                    breaking_day=breaking_day+1;
//                }
//        }
//        cout<<"Case #"<<i+1<<": "<<breaking_day<<endl;
//
        
    }
    return 0;
}