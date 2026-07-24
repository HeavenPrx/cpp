#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

void enterVec(vector<int>& v){
    cout<<"vector begin"<<endl;
    int num = 0;
    while(num != -1){
        cin>>num;
        if(num != -1) v.push_back(num);
    }
}

void enterLis(list<int>& l){
    cout<<"list begin"<<endl;
    int num = 0;
    while (num != -1)
    {   
        cin>>num;
        if(num != -1) l.push_back(num);
    }
}

bool comSame(const vector<int>& v,const list<int>& l){
    int size = 0;
    if(v.size() != l.size())  return false;
    return equal(v.begin(), v.end(), l.begin());  
    /*手动遍历
    while (it1 != v.end()) {
        if (*it1 != *it2) return false;
        ++it1;
        ++it2;
    }
    */
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    list<int> l;

    enterVec(v);
    enterLis(l);

    cout<<comSame(v,l)<<endl;
    return 0;
}
