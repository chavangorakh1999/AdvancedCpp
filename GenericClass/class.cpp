template <class T> class myClass
{
    T p1;
    T p2;
    public:
        myClass(T x,T y)
        {
            p1=x;
            p2=y;
        }
        void whatYouGot()
        {
            cout<<"I got p1 = "<<p1<<" and"<<" p2 ="<<p2;
        }

};
template <class Type1= string ,class Type2 = int>class MyClass
{
    Type1 p1;
    Type2 p2;
    public:
        MyClass(Type1 x,Type2 y)
        {
            p1=x;
            p2=y;
        }
        void WhatYouGot()
        {
            cout<<"I got p1 = "<<p1<<" and"<<" p2 ="<<p2;
        }
};