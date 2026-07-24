#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> num1;
    
    //规定初始容量，默认值为0
    vector<int> num2(3);

    //规定初始容量，规定默认值
    vector<int> num3(3,100);

    //cpp 11 新增定义方式
    vector<int> num4 = {1,2,3};

    cout<<num4.size()<<endl;
    num4.push_back(100);
    cout<<num4.size()<<endl;
    num4.push_back(100);
    cout<<num4.size()<<endl;
    num4.push_back(100);
    cout<<num4.size()<<endl;
    for (int i = 0; i < num3.size(); i++)
    {
        cout<<num3[i]<<" ";
    }
    
    return 0;
}