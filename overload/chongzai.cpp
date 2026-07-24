#include<iostream>

using namespace std;

class People
{
private:
    friend ostream& operator<<(ostream& out,People& pp);
    int age;
public:
    People(int a);
    /**
     *  不带参的是++p； 
     *  带参的是p++
     */
    People& operator++(){
        this->age += 1;
        return *this;
    }

    People& operator++(int){
        People temp = *this;
        this->age++;
        return temp;
    }

    People(const People& other):age(other.age){ cout<<"kaobei"<<endl; }

    void show(){
        cout<<this->age<<endl;
    }

    
    ~People();
};

People::People(int a):age(a)
{
    cout<<"go zao"<<endl;
}

ostream& operator<<(ostream& out,People& pp){
    out<<pp.age;
    return out;
}



People::~People()
{
}

int main(int argc, char const *argv[])
{
    People p(12);
    People w(15);
    cout<<p<<w; 
    return 0;
}
