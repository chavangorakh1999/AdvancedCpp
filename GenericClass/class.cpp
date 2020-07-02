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