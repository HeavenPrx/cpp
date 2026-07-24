#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);


    stack<int,vector<int>> s(v);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(9);
    s.push(5);
    s.push(3);

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}
