#include<iostream>
#include<map>

using namespace std;

class Student{
private:
    string name;
    int score;
public:
    Student(string name,int score):name(name),score(score){}
    void print()const{cout<<name<<" "<<score<<endl;}
    bool operator<(const Student s1)const{
        return this->score<s1.score;
    }
};

int main(int argc, char const *argv[])
{
    map<Student,string> stus;
    
    stus.insert(pair<Student,string>(Student("xu",100),"god"));
    stus.insert(pair<Student,string>(Student("he",10),"shi"));
    stus.insert(pair<Student,string>(Student("ji",90),"g"));

    map<Student,string>::iterator iter;
    for (iter = stus.begin(); iter != stus.end(); iter++)
    {
        (*iter).first.print();
        cout<<(*iter).second<<endl;
    }
    
    return 0;
}
