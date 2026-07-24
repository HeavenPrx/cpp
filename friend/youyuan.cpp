#include<iostream>

using namespace std;


class Student
{
private:
    /* data */
    string name;
    int grade;
    friend int compare(Student& a,Student& b);
public:
    Student(/* args */);
    void setData(string name,int score);
    void show();
    ~Student();
};

Student::Student(/* args */)
{
}

void Student::setData(string name,int grade){
    this->name = name;
    this->grade = grade;
}

void Student::show(){
    cout<<"name is "<<name
        <<"grade is "<<grade;
}

Student::~Student()
{

}

class Teacher
{
private:
    /* data */
    friend class Student;
    string name;
public:
    Teacher(string name);
    void check(Student s);
    ~Teacher();
};

Teacher::Teacher(string name):name(name)
{
}

void Teacher::check(Student s){
    s.show();
}
Teacher::~Teacher()
{
}

int compare(Student& a,Student& b){
    return (a.grade > b.grade ? 1 : (a.grade < b.grade) ? -1 : 0); 
}

// int compare(Student& a, Student& b) {
//     if (a.grade > b.grade) return 1;
//     if (a.grade < b.grade) return -1;
//     return 0;
// }

int main(){
    Student stus[5];
    Student stu;
    stu.setData("xu",12);
    Teacher t("haha");
    // for(int i = 0;i < 5;i++){
    //     string name;
    //     int grade;
    //     cin>>name;
    //     cin>>grade;
    //     stus[i].setData(name,grade);
    // }
    // compare(stus[0],stus[1]);
    t.check(stu);
}