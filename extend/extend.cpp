#include<iostream>

using namespace std;

class Father
{
private:
    int age;
public:
    Father(int age);
    void print(){
        cout<<this->age<<endl;
    }
};

Father::Father(int age):age(age){}

class Son:public Father
{
private:  
    string name;
public:
    Son(string name,int age);
    void print(){
        cout<<this->name<<endl;
    }
};

Son::Son(string name,int age):Father(age)
{
    this->name = name;
}

int main(int argc, char const *argv[])
{
    Son s("xu",12);
    s.print();
    s.Father::print();
    return 0;
}
