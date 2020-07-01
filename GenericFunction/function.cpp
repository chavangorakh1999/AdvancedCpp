template<typename T> void WhatYouGot(T x)
{
    cout<< "Generic Function with one parameters"<<endl;
    cout<< "I got x = "<<x<<endl;
}
template<typename T1,typename T2> void WhatYouGot(T1 x,T2 y)
{
    cout<< "Generic Function with two parameters"<<endl;
    cout<< "I got x = "<<x<<endl;
    cout<< "I got y = "<<y<<endl;
}