#include<iostream>

using namespace std;

class MyArray{
    private:
        int* p;
        int length;
    public:
        void input(int len){
            length = len;
            p = new int(length);
            for(int i = 0;i < len;i++){
                cout<<"please enter "<<i<<" number"<<endl;
                cin>>p[i];
            }
        }
        int getMax(){
            int max = p[0];
            for(int i = 0;i < length;i++){
                if(p[i] > max) max = p[i];
            }
            return max;
        }
        int getMin(){
            int min = p[0];
            for(int i = 0;i < length;i++){
                if(p[i] < min) min = p[i];
            }
            return min;
        }
        int avg(){
            int sum = 0;
            for(int i = 0;i < length;i++){
                 sum += p[i];
            }
            return sum/length;
        }
        void show(){
            for(int i = 0;i < length;i++){
                cout<<p[i]<<endl;
            }
        }
};
int main()
{
    MyArray ma;
    ma.input(5);
    ma.show();
    cout<<"max is "<<ma.getMax()<<endl;
    cout<<"min is "<<ma.getMin()<<endl;
    cout<<"avg is "<<ma.avg()<<endl;
    return 0;
}
