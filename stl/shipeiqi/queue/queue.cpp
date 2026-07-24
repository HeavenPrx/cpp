#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
