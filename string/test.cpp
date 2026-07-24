#include<iostream>
using namespace std;
int main(){
    int num;
    //cout<<"cao";
    //cin>>num;
    //cout<<"num is"<<num<<endl;

    //不用string类型 char*指针类型是不可以对字符串进行改动的
    //除了stl容器和std::array这种
    char* p = "hello world";
    cout<<*p<<endl;
    char*& s = p;
    s[0] = 'w';
    cout<<*s<<endl;
}