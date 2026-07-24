#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
    friend class Teacher;
    string name;
    int grade;
    Student(string n,int grade);
public:
    ~Student();
};

Student::Student(string n,int g):name(n),grade(g)
{
}

Student::~Student()
{
}

class Teacher
{
private:
    Student* s[5];
public:
    Teacher();
    void show();
    void sort();
    ~Teacher();
};

Teacher::Teacher()
{
    s[0] = new Student("张三", 95);
    s[1] = new Student("李四", 88);
    s[2] = new Student("王五", 92);
    s[3] = new Student("赵六", 78);
    s[4] = new Student("孙七", 85);
}

void Teacher::show(){
    for(int i = 0;i < 5;i++){
        cout<<s[i]->grade<<" ";
    }
    cout<<endl;
}

void Teacher::sort(){
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 4 - i;j++){
            if(s[j]->grade > s[j + 1]->grade){
                int temp = s[j]->grade;
                s[j]->grade = s[j+1]->grade;
                s[j+1]->grade = temp;
            }
        }
    }
}

Teacher::~Teacher() 
{
}

int main(int argc, char const *argv[])
{
    Teacher t;
    t.show();
    t.sort();
    t.show();
    return 0;
}
