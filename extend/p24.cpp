#include<iostream>
using namespace std;

class Person{
public:
    int age;
    Person(int age):age(age){}
    virtual void getage() = 0;
};

class xm:public Person{
public:
    string name;
    xm(int age,string name):Person(age),name(name){}
    void getage() override{
        cout<<age<<endl;
    }
    void getname(){cout<<name<<endl;}
};

int main(int argc, char const *argv[])
{
    Person* p = new xm(12,"xu");
    p->getage();
    return 0;
}


