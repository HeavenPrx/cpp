#include<iostream>

using namespace std;

class Ivehicel{
public:
    int weight;
    int distance;
    Ivehicel(int weight,int distance):weight(weight),distance(distance){}
    virtual int money() = 0;
};

class Trunk: public Ivehicel{
public:
    Trunk(int weight,int distance):Ivehicel(weight,distance){}
    int money() override{
        return (weight < 60 && distance < 1000) ? weight * distance * 120 : 0;
    }
};

class Train: public Ivehicel{
public:
    Train(int weight,int distance):Ivehicel(weight,distance){}
    int money() override{
        if(distance < 900) return weight*distance*250;
            return weight*distance*300;
    }
};

class Fight: public Ivehicel{
public:
    Fight(int weight,int distance):Ivehicel(weight,distance){}
    int money() override{
        if(distance < 500) return weight*distance*750;
    }
};

int main(int argc, char const *argv[])
{
    int distance;
    int weight;
    int i;
    cout<<"i = 1 is trunk"<<endl;
    cout<<"i = 2 is train"<<endl;
    cout<<"i = 3 is fligt"<<endl;
    cin>>i;
    Ivehicel* vehicle = nullptr;    
    switch (i)
    {
    case 1:
        cout << "pls enter weight and distance" << endl;
        cin >> weight >> distance;
        vehicle = new Trunk(weight, distance);  // 指向派生类对象
        cout << "ka money is " << vehicle->money() << endl;
    break;

    case 2:
        cout << "pls enter weight and distance" << endl;
        cin >> weight >> distance;
        vehicle = new Train(weight, distance);
        cout << "huo money is " << vehicle->money() << endl;
    break;

    case 3:
        cout << "pls enter weight and distance" << endl;
        cin >> weight >> distance;
        vehicle = new Fight(weight, distance);
        cout << "fei money is " << vehicle->money() << endl;
    break;
}
    return 0;
}
