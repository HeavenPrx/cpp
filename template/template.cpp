#include<iostream>

using namespace std;

template<typename T>class Person{
public:
    T grade;
    string name;
    Person(string name,T grade):name(name),grade(grade){}
    ~Person(){}
};

class Student{
public:
    int age;
    string name;
    Student(string name,int age):name(name),age(age){}
};

template<typename U,class T>
U& fun(U a,T& b){
    b.age -= a;
    return b.age;
}

template <class U>
void add(U a,U b){
 
    cout<<a.grade + b.grade<<endl;
}

int main(int argc, char const *argv[])
{
//     add<int>(3,2);
//     Student b("xx",25);
//     int& num = fun(5,b);
//     num = 100;
//     cout<<b.age<<endl;
    Person<int> xm("xm",100);
    Person<int>* xh = new Person<int>("xh",100);
    Person<int> xl("xl",100);

    add<Person<int>>(xm , xl);
    delete xh;
    return 0;
}