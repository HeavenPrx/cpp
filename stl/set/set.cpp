#include<iostream>
#include<set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(13);
    s.insert(15);
    s.insert(15);
    s.insert(13);
    s.insert(11);

    for(auto ss : s){
        cout<<ss<<" ";
    }
    cout<<endl;
    return 0;
}
