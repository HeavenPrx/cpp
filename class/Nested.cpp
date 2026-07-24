#include<iostream>

using namespace std;

class Student
{
private:
    /* data */
    int score;
    string name;
public:
    Student(int s,string n);
    void setScore(int s);
    void show();
};

Student::Student(int s,string n):score(s),name(n)
{
}

void Student::setScore(int s){
    score = s;
}

void Student::show(){
    cout<<name<<" score is "<<score<<endl;
}

class Teacher
{
private:
    Student* stus[3];
public:
    Teacher();
    Student* randHappyBoy();
    void heeh(Student*);
    void teacherShow();
};

Teacher::Teacher()
{
    stus[0] = new Student(12,"xu");
    stus[1] = new Student(22,"fe");
    stus[2] = new Student(44,"qq");
}

Student* Teacher::randHappyBoy(){
    srand(time(NULL));
    int key = rand() % 3;
    return stus[key];
}

void Teacher::heeh(Student* s){
    s->setScore(0);
}

void Teacher::teacherShow(){
    this->stus[0]->show();
    this->stus[1]->show();
    this->stus[2]->show();
}


int main(){
    Teacher t;
    t.teacherShow();
    
    t.heeh(t.randHappyBoy());

    t.teacherShow();
    return 0;
}
