#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student{
private:
    string name;
public:
    int grade;
    void find_90(vector<Student> v){
        for(int i = 0;i < v.size();i++){
            if(v.at(i).grade > 90) cout<<"pass 90 is "<<v.at(i).name<<" ";
        }
    }


    Student(string name,int grade):name(name),grade(grade){}
};

void PrintStu(vector<Student> v){
    // for(int i = 0;i < v.size();i++){
    //     cout<<v[i].grade<<" ";
    // }
    // cout<<endl;
    /**
     * 反向迭代器
     */
    vector<Student>::reverse_iterator iter;
    for (iter = v.rbegin(); iter < v.rend(); iter++)
    {
        cout<<(*iter).grade<<" ";
    }
    cout<<endl;
    
    // vector<Student>::iterator iter;
    // for (iter = v.begin(); iter != v.end(); iter++)
    // {
    //     cout<<(*iter).grade<<" ";
    // }
    // cout<<endl;
}

void PrintGodStu(vector<Student>& v){
    for(int i = 0;i < v.size();i++){
        if(v.at(i).grade < 60) v.erase(v.begin() + i);
        cout<<v[i].grade<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    vector<Student> v = {
        Student("xu",100),
        Student("xh",80),
        Student("xl",50),
        Student("xb",70),
        Student("xz",60)

    };


    PrintStu(v);
    PrintGodStu(v);
    PrintStu(v);
    return 0;
}
