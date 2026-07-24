#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    // priority_queue<int, vector<int>,less<int>> pri;
    priority_queue<int, vector<int>,greater<int>> pri;

    pri.push(1);
    pri.push(2);
    pri.push(3);
    pri.push(4);

    while (!pri.empty())
    {
        cout<<pri.top()<<endl;
        pri.pop();
    }
    
    return 0;
}
