#include<iostream>

using namespace std;

class son
{
private:
    int val_1;
protected:
    int val_2;
public:
    int val_3;
    son(int val_1,int val_2,int val_3);
};

son::son(int val_1,int val_2,int val_3):val_1(val_1),val_2(val_2),val_3(val_3)
{
}

class father:public son
{
private:
public:
    int val_4;
    father(int val_1,int val_2,int val_3,int val_4);
    void show(){
        cout<<son::val_2<<son::val_3<<endl;
    }
    void fun(){
        val_2 = 1;
        val_3 = 4;
       
    }
};
father::father(int val_1,int val_2,int val_3,int val_4):son(val_1,val_2,val_3),val_4(val_4){}


int main(int argc, char const *argv[])
{
    father f(10,20,30,40);
    f.show();
    f.fun();
    f.show();
    // show_01();
    return 0;
}
