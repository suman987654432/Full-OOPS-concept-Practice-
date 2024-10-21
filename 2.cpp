#include<iostream>
using namespace std;
class Base{
    public:Base(){
        cout<<"Base class constructor called"<<endl;
    }
    ~Base(){
        cout<<"Base class destructor called"<<endl;
    }
};
class Derived1:public Base
{
    public:Derived1(){
        cout<<"Derived1 class constructor called"<<endl;
    }
    ~Derived1(){
        cout<<"Derived1 class destructor called"<<endl;
    }
};
class Derived2:public Base{
    public:Derived2(){
        cout<<"Derived2 class constructor called"<<endl;
    }
    ~Derived2(){
        cout<<"Derived2 class destructor called"<<endl;
    }
};
int main()
{
    Derived1 d1;
    Derived2 d2;
}