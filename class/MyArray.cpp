#include<iostream>
#include<string>

using namespace std;

class MyArray{
private:
    int* p;
    int length;
public:
    // MyArray(int length):length(length){}
    void input(int len){
        this->length = len;
        p = new int[len];
        for (int i = 0; i < len; i++)
        {
            cin>>p[i];
        }
    }

    int max(){
        int max = this->p[0];
        for(int i = 0;i < length;i++){
            if(this->p[i] > max) max = this->p[i];
        }
        return max;
    }

    int min(){
        int min = this->p[0];
        for(int i = 0;i < length;i++){
            if(this->p[i] < min) min = this->p[i];
        }
        return min;
    }

    int avg(){
        int sum = 0;
        for(int i = 0;i < length;i++){
            sum += this->p[i];
        }
        return sum/this->length;
    }
};

int main(int argc, char const *argv[])
{
    MyArray ma;
    ma.input(5);
    cout<<ma.max()<<endl;
    cout<<ma.min()<<endl;
    cout<<ma.avg()<<endl;
    return 0;
}
