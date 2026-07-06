#include<iostream>

using namespace std;

inline int num_add(int a,int b) {return a + b;}

int main(int argc, char const *argv[])
{
    cout<<num_add(3,2)<<endl;
    return 0;
}
