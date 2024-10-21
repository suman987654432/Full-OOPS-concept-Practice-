#include<iostream>
using namespace std;
class Vehicle{
    public:virtual void SpeedUp()=0;
};
class Car:public Vehicle {
    public:void SpeedUp(){
        cout<<"Car is speeding up"<<endl;
    }
};
class Bicycle:public Vehicle
{
    public:void SpeedUp(){
        cout<<"Bicycle is speeding up"<<endl;
    }
};
int main()
{
    Vehicle *v;
    Car c;
    Bicycle b;
    v=&c;
    v->SpeedUp();
    v=&b;
    v->SpeedUp();
}