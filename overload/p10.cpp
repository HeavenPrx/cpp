#include<iostream>

using namespace std;

class Triangle
{
private:
    int a1;
    int a2;
    int a3;
    int sum;
public:
    Triangle(int a1,int a2,int a3);
    Triangle operator+(const Triangle& t2)const;
    ~Triangle();
};

Triangle::Triangle(int a1,int a2,int a3):a1(a1),a2(a2),a3(a3)
{
    sum = a1 + a2 + a3;
}

Triangle Triangle::operator+(const Triangle& t2)const{
    return Triangle(
            this->a1 + t2.a1,
            this->a2 + t2.a2,
            this->a3 + t2.a3    
    );
}

Triangle::~Triangle()
{
}

int main(int argc, char const *argv[])
{
    Triangle t1(2,3,4);
    Triangle t2(3,4,5);

    t1 + t2;
    return 0;
}
