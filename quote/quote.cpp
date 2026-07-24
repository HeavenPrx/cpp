#include<iostream>

using namespace std;

int main()
{
    int a = 2;
    int& b = a;
    cout<<"a memory is"<<&a<<endl;
    cout<<"b memory is"<<&b<<endl;

    b = 5;
    cout<<a<<endl<<b<<endl;
    return 0;
}
