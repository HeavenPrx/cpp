#include<iostream>

using namespace std;

class Student
{
private:
    /* data */
    string name;
    int grade;
public:
    static int sum_stus;
    static int sum_grads;
    Student(string n,int grade);
    static int getAverage(Student* stus);
    static int getTotalCount(Student* stus);
    ~Student();
};

Student::Student(string n,int g):name(n),grade(g)
{
}

int Student::getAverage(Student* stus){
    for(int i = 0;i < getTotalCount(stus);i++){
        sum_grads += stus[i].grade;
    }
    return sum_grads;
}   

int Student::getTotalCount(Student* stus){
    return sizeof(stus)/sizeof(stus[0]);
}

Student::~Student()
{
    sum_stus--;
    sum_grads -= grade;
}

int main(int argc, char const *argv[])
{
    Student stus[5] = {
        {"xu",100},
        {"he",60},
        {"ma",10},
        {"piao",20},
        {"ji",80}
    };
    cout<<Student::getTotalCount(stus)<<endl;
    return 0;
}

