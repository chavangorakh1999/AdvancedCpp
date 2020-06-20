#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

 class person
 {
     char name[80];
     int age;
     public:

        person()
        {
            strcpy(name,"noname");
            age=0;
        }
        person(char *name,int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
        void whoAreYou()
        {
            cout<<"Hello , I am "<<name<<" and I am "<<age<<" years old"<<endl;
        }
        void change(char *name,int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
 };
 int main()
 {
     person grc("GRC",21);

     fstream file("person.bin",ios :: binary | ios :: in | ios :: out | ios :: trunc);
     if(!file.is_open())
     {
         cout<<"Error while openingm file";
     }
     else
     {
        file.write((char *)&grc,sizeof(person));
        file.seekg(0);

        person pgc;
        file.read((char *)&pgc,sizeof(person));

        grc.whoAreYou();
        pgc.whoAreYou();

        grc.change("Pgc",20);

        grc.whoAreYou();
        pgc.whoAreYou();
     }
     
     

     return 0;
 }