#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list<int> v;
    int num;
    for (int i = 0; i < 10; i++)
    {
        cout<<"enter "<<i<<"nd data"<<endl;
        cin>>num;
        v.push_back(num);
    }
    list<int>::iterator iter;

    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;

    //delete
    for (iter = v.begin(); iter != v.end();)
    {
        if(*iter % 2 == 0){
            iter = v.erase(iter);
        }
        else{
            iter++;
        }
    }
    
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    return 0;
}
