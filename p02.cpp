#include<iostream>

using namespace std;

class Person{
    public:
        int age;
        string name;
        
    void show(){
        cout<<"age is "<<this->id<<"  name is"<<this->name<<endl;
    }
    Person(int age, string name, int id) : age(age), name(name), id(id) {
}
    private:
        int id;

};


int main(int argc, char const *argv[])
{
    Person *p = new Person(12,"xu",24);
    p->show();
    
    return 0;
}
