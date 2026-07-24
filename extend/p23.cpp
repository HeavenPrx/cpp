#include<iostream>

using namespace std;

class animal{
private:
    char* name;
public:
    animal(char* name):name(name){}
    char* getName(){
        return name;
    }

    virtual void sleep() = 0;
    virtual void play() = 0;
};

class dog: public animal{
public:
    dog(char* name):animal(name){}
    void sleep(){
        cout<<"dog sleeping...";
    }
    void play(){
        cout<<"dog playing...";
    }
};

class cat: public animal{
public:
    cat(char* name):animal(name){}
    void sleep(){
        cout<<"cat sleeping...";
    }
    void play(){
        cout<<"cat playing...";
    }
};

class Person{
public:
    char* name;
    int age;

    Person(char* name,int age):name(name),age(age){}
    void play_with(animal& ani){
        ani.sleep();
        ani.play();
    }
};

int main(int argc, char const *argv[])
{
    cat c("hedongyang");
    Person p("xu",22);
    p.play_with(c);
    cout<<c.getName()<<endl;
    return 0;
}
