#include<iostream>
#include<cstring>

using namespace std;

class Person
{
private:
    /* data */
    char* name;
    int age;
    int grade;
public:
    //有参构造
    Person(char* n,int age);

    //有参拷贝
    Person(const Person& p);

    Person* findByname(string n);

    void show();
    ~Person();
};

    //有参构造实现
Person::Person(char* n,int a):age(a)
{
    name = new char[strlen(n) + 1];
    strcpy(name,n);
}

    //有参拷贝实现
Person::Person(const Person& p):age(p.age)
{
    name = new char[strlen(p.name) + 1];
    strcpy(name,p.name);
}

void Person::show(){
    cout<<"name is "<<name;
    cout<<" age is "<<age<<endl;
}

Person* Person::findByname(string n){
    if(this->name == n) return this;
    return NULL;
}

Person::~Person()
{
    cout<<this->name<<" xi gouing"<<endl;
    delete[] name;
    name = NULL;
}

void fun1(Person& p){
    p.show();
}

Person* fun2(Person** p,string n){
    int size = sizeof(p) / sizeof(p[0]);
    Person* q;
    for(int i = 0;i < size;i++){
        q = p[i]->findByname(n);
        if(q != NULL) return q;
        return NULL;
    }
}
int main(int argc, char const *argv[])
{
//1.已经存在的对象拷贝构造
    // Person p1("xu",12);
    // p1.show();
    // Person* p2 = new Person("piao",22);
    // p2->show();
    // Person p3(*p2);
    // p3.show();  
    // p2->~Person();
    // Person**p = new Person*[3];
    // p[0] = new Person("xu",12);
    // p[0]->show();
    // p[1] = new Person(* p[0]);
    // p[1]->show();
    // p[2] = p[1];
    // p[2]->show();
    
    // delete p[0];
    // delete p[1];
    // delete p[2];

//2.函数的参数是对象
    //Person p("xu",12);
    //fun1(p);
//3.函数的返回值是对象
    Person* p[3];
    p[0] = new Person("xu",12);
    p[1] = new Person("he",12);     
    p[2] = new Person("piao",12);

    Person* res;
    res = fun2(p,"x1");
    if(res != NULL) res->show();
    else
        cout<<"no found"<<endl;
    return 0;
}
