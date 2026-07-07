#include<iostream>

using namespace std;

class Person
{
private:
    /* data */
    mutable int age;  //可以突破const关键字

public:
    Person(int a);
    void fun()const; //常函数和普通函数可以构成函数重载（special）
    void fun();      //同时存在普通对象优先调用普通函数
    ~Person();
};

Person::Person(int a):age(a)
{
    
}

void Person::fun()const{
    this->age;  
    //const修饰的常函数不可以修改成员变量
    //this->age++;
}

void Person::fun(){
    this->age;
}
Person::~Person()
{
}

int main(){
    Person p1(10);
    const Person p2(12);
    p1.fun();
    p2.fun();
    //常对象只能调用常函数
    //p2.fun();
}