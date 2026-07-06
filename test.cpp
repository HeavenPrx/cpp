#include<iostream>
using namespace std;
int main(){
    int num;
    //cout<<"cao";
    //cin>>num;
    //cout<<"num is"<<num<<endl;

    char* p = "hello world";
    cout<<*p<<endl;
    char*& s = p;
    s[0] = 'w';
    cout<<*s<<endl;
}