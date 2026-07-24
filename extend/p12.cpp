#include<iostream>

using namespace std;

class Vehicle
{
private:
    int wheels;
protected:
    int weight;
public:
    Vehicle(int wheels,int weight);
    void show()const{
        cout<<"wheels is "<<wheels
            <<"weight is "<<weight;
    }
};

Vehicle::Vehicle(int wheels,int weight):wheels(wheels),weight(weight) {}

class car:public Vehicle
{
private:
    int passenger_load;
public:
    car(int wheels,int weight,int passenger_load);
};

car::car(int wheels,int weight,int passenger_load):Vehicle(wheels,weight),passenger_load(passenger_load) {}

class Truck : public Vehicle
{
private:
    int passenger_load;
    int pay_load;
public:
    Truck(int wheels,int weight,int passenger_load,int pay_load);
};

Truck::Truck(int wheels,int weight,int passenger_load,int pay_load):Vehicle(wheels,weight),passenger_load(passenger_load),pay_load(pay_load){}

int main(int argc, char const *argv[])
{
    
    return 0;
}
