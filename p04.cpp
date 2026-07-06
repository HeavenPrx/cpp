#include<iostream>

using namespace std;

class Circle{
    public:
        int radius;

        void setRadius(int r);
        double getLength();
        double getArea();
};

void Circle::setRadius(int r){
    radius = r;
}

double Circle::getLength(){
    return (2*radius*3.14);
}

double Circle::getArea(){
    return 6.28*radius*radius;
}

int main()
{
    Circle c;
    c.setRadius(2);
    cout<<"length is "<<c.getLength()<<endl;
    cout<<"area is "<<c.getArea()<<endl;
    return 0;
}
