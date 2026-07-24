#include<iostream>

#define N 3

using namespace std;

struct Student
{
    string name;
    int grade;
};

//enter information
void inputinfo(Student* stu){
    cout<<"enter name"<<endl;
    cin>>stu->name;
    cout<<"enter grade"<<endl;
    cin>>stu->grade; 
}

//find name
int findby(Student* stus,string name){
    for(int i = 0;i < N;i++){
        if(stus[i].name == name){
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    //creat array
    Student stus[N];

    //input
    for(int i = 0;i < N;i++){
        inputinfo(&stus[i]);
    }

    //find
    int res = findby(stus,"bob");
    if(res == -1) cout<<"no result"<<endl;
    else cout<<stus[res].name<<" "<<stus[res].grade<<endl;

    Student stuus[4] = {
        {"xu",111},
        {"qu",222},
    };   
    return 0;
}
