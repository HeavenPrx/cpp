#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
    string name;
    bool gender;
    int age;
    Person* lover;
public:
    Person(string name,bool gender);
    void setAge(int age);
    void marry(Person& other);
    void show();
    ~Person();
};

Person::Person(string n,bool g):name(n),gender(g)
{
}

void Person::setAge(int a)
{
    age =  a;
}

void Person::marry(Person& other){
    this->lover = &other;
    cout<<name<<" and "<<other.name<<" 111"<<endl;
}

void Person::show(){
    cout<<name<<" ";
    cout<<gender<<" ";
    cout<<age<<" ";
    cout<<this->lover->name<<" ";
}

Person::~Person()
{
}

int main(int argc, char const *argv[])
{
    Person* p = new Person("xu",true);
    p->setAge(19);
    Person q("he",true);
    p->marry(q);
    p->show();
    q.show();
    return 0;
}

