#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include <algorithm>

using namespace std;


void print(const vector<int>& v){
    for(int i = 0;i < v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void killSame(vector<int>& v) {
    sort(v.begin(), v.end());
    print(v);
    v.erase(unique(v.begin(), v.end()), v.end());
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%5);
    }

    print(v);
    killSame(v);
    print(v);

    return 0;
}
