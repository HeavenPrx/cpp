#include<iostream>

using namespace std;

class Baby{
private:
    string name;
    int age;
public:
    Baby(string name,int age):name(name),age(age){}
    virtual void sleep(){cout<<"Baby sleep...";}
    virtual void eat(){cout<<"Baby eat...";}
};

class Student{
private:
    int score;
    virtual void study(){cout<<"Student study...";}
public:
    Student(int score):score(score) {}
};

class Xiaoming: public Baby, public Student{
private:
    int id;
public:
    void sleep(){cout<<"Xiaoming sleep...";}
    void eat(){cout<<"Xiaoming eat...";}
    void study(){cout<<"Xiaoming study...";}    
    Xiaoming(string name,int age,int score,int id):Baby(name,age),Student(score),id(id){}
};

int main(int argc, char const *argv[])
{
    // Xiaoming xm("xm",23,100,1);
    // xm.eat();
    // xm.sleep();
    // xm.study();

    // Baby* b = &xm;
    // b->eat();
    Baby b("xm",10);
    cout<<"111"<<endl;
    return 0;
}

