#include<iostream>
#include<type_traits>
using namespace std; 
  
int main() 
{ 

    typedef std::remove_const<int>::type first_variable; 
    
    typedef std::remove_const<int* const>::type second_variable; 
    
    cout << std::boolalpha; 
  
    cout << "Does first_variable contain const int? "
         << is_same<int, first_variable>::value 
         << endl; 
  
   
  
    cout << "Does second_variable contain const int? "
         << is_same<int, second_variable>::value 
         << endl; 
    return 0; 
} 