#include<iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string n,int a);

    //传入对象数组
    void shuzuFun(Person* p);
    //传入对象
    void duixiangFun(Person p);
    //传入引用类型对象
    void yinyongFun(Person& p);
    ~Person();
};

Person::Person(string n,int a):name(n),age(a)
{
}

void Person::shuzuFun(Person* p){

}
Person::~Person()
{
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

