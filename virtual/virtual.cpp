#include<iostream>

using namespace std;

class Person{
public:
/**
 * 加virtual 可以用指针指向子类地址来替代子类对象进行类内操作
 * 
 */
    virtual void buyTicket(){
        cout<<"full"<<endl;
    }
};

class student: public Person{
public:
    void buyTicket(){
        cout<<"half"<<endl;
    }
};

class Trainman: public Person{
public:
    void buyTicket(){
        cout<<"eight"<<endl;
    }
};

void fun(Person* p){
    p->buyTicket();
}

int main(int argc, char const *argv[])
{
    student s;
    Trainman t;
    fun(&s);
    fun(&t);
    return 0;
}
