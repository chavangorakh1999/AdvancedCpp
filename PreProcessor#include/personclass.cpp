
class person
{
    string name;
    int age;
    public:
        person()
        {
            name="Noname";
            age=0;
        }
        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void display()
        {
            cout<<"I am "<<name<<" and I am "<<age<<" Years old."<<endl;
        }
};