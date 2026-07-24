#include<iostream>

using namespace std;

class People {
public:
    int age;
    People() : age(0) {}
    People(int age) : age(age) {}
};

class Student : virtual public People {
public:
    int score;
    Student(int score) : score(score) {}  
};

class Teacher : virtual public People {
public:
    int salary;
    Teacher(int salary) : salary(salary) {}  
};

class Assistant : public Student, public Teacher {
public:
    Assistant(int age, int score, int salary) 
        : People(age),          
          Student(score),
          Teacher(salary) 
    {}
};

int main(int argc, char const *argv[])
{
    Assistant as(30,100,2);
    
    return 0;
}
