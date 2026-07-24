#include<iostream>

using namespace std;

class Shape{
public:
    virtual int area(){return 0;}
    virtual int perimeter(){return 0;};
};

class Circle: public Shape{
public:
    int r;
    Circle(int ra){r = ra;}
    int area()override{
        return 6.28*r*r;
    }

    int perimeter()override{
        return 6.28*r;
    }
};

class Rectangle: public Shape{
public:
    int chang;
    int kuan;
    Rectangle(int a,int b):chang(a),kuan(b){}
    int area()override{
        return chang*kuan;
    }

    int perimeter()override{
        return 2*(chang+kuan);
    }
};

class Triangle: public Shape{
public:
    int a;
    int b;
    int c;

    Triangle(int a,int b,int c):a(a),b(b),c(c){}    
    int area()override{
        return 1;
    }

    int perimeter()override{
        return (a+b+c);
    }
};

class Calculator{
public:
    static int sumArea(Shape* arr[],int n){
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += arr[i]->area();
        }
        return sum;
    }
};

int main(int argc, char const *argv[])
{
    Shape* c = new Circle(2);
    Shape* r = new Rectangle(1,2);
    Shape* t = new Triangle(3,4,5);

    Shape* arr[3] = {c,r,t};

    // cout<<"c->area() is "<<c->area()<<endl;
    // cout<<"r->area() is "<<r->area()<<endl;
    // cout<<"t->area() is "<<t->area()<<endl;

    cout<<"sumarea is "<<Calculator::sumArea(arr,3);
    
    // Shape* arr[3] = {
    //     new Circle(1),
    //     new Rectangle(1,2),
    //     new Triangle(3,4,5)
    // };

    return 0;
}
