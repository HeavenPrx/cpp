#include<iostream>

using namespace std;

class Student
{
private:
/* data */
    string name;
    int age;
    
public:
    static string wifi;
    Student(string n,int age);
    // static void init_wifi(){
    //     wifi = "STEEA";
    // }
    static void get_wifi();
    ~Student();
};


Student::Student(string n,int a):name(n),age(a)
{
    
}

void Student::get_wifi(){
    cout<<wifi<<endl;
}
Student::~Student()
{
}

string Student::wifi = "STAEA";

int main(int argc, char const *argv[])

{
    Student sm("sm",16);
    Student::get_wifi();
    return 0;
}
