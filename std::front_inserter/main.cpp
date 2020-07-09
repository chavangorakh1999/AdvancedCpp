#include<iostream>
#include<list>
#include<iterator>

using namespace std;
  
int main()
{
    
    int first[] = { 11, 55, 88, 87};
    std::list<int> d1 (first, first + sizeof(first) / sizeof(int) );

      
    int second[] = { 23, 52, 74, 31, 86};
    std::list<int> d2 (second, second + sizeof(second) / sizeof(int) );

    std::copy(d1.begin(),d1.end(),std::front_inserter(d2));

    cout<<" d1= ";
    for (std::list<int>::iterator it = d1.begin(); it != d1.end(); it++)
    std::cout << *it << ' ';

    cout<<"\n d2= ";
    for (std::list<int>::iterator it = d2.begin(); it != d2.end(); it++)
    std::cout << *it << ' ';

    return 0;
}