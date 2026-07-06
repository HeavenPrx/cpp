#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int max = 0;
    int sum = 0;
    int min = 100;
    int* score = new int[5]();
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
    
    return 0;
}
