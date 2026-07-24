#include<iostream>

using namespace std;

struct Student
{   
    /* data */
    string name;
    int id;
    int score;
};

int main(int argc, char const *argv[])
{
    Student stus[3];
    
    int sum = 0;
    int avg = 0;
    for(int i = 0;i < 3;i++){
        cout<<"enter information: name,id,score"<<endl;
        cin>>stus[i].name>>stus[i].id>>stus[i].score;
    }

    int max = stus[0].score;
    int maxi = 0;

    for(int i = 0;i < 3;i++){
        if(stus[i].score > max){
            max = stus[i].score;
            maxi = i;
       }
       sum += stus[i].score;
    }

    cout<<"avg is "<<sum/3<<endl;
    cout<<"max Student name is "<<stus[maxi].name
        <<" max Student score is "<<stus[maxi].score<<endl;
    return 0;
}