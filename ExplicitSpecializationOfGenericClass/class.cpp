
template<class type> class MyClass
{
type p1;
public:
    MyClass(type p)
    {
        p1=p;
        
    }
    void WhatYouGot()
    {
        cout<<"I got "<<p1<<" value"<<endl;
        cout<<"from Generic class"<<endl;
    }
};
template<> class MyClass<int>
{
int p1;
public:
    MyClass(int p)
    {
        p1=p;
       
    }
    void WhatYouGot()
    {
        cout<<"I got "<<p1<<" value"<<endl;
         cout<<"from int class"<<endl;
    }
};

