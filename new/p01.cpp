#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int max = 0;
    int sum = 0;
    int min = 100;
    /**
     * 分别为不初始化
     * 初始化数值全是0
     * 初始化自定义数字
     */
    int* score1 = new int[5];
    int* score = new int[5]();
    int* score2 = new int[5]{1,2,3,4,5};
    for(int i = 0;i < 4;i++){
        cin>>score[i];
    }
    for(int i = 0;i < 4;i++){
        if(score[i] > max) max = score[i];
        if(score[i] < min) min = score[i];
        sum += score[i];
    }
    cout<<"max is "<< max <<endl;
    cout<<"min is "<< min <<endl;
    cout<<"avg is "<< sum/4 <<endl; 
    
    delete[] score;
    delete[] score1;
    delete[] score2;

    score = nullptr;
    score1 = nullptr;
    score2 = nullptr;
    return 0;
}
