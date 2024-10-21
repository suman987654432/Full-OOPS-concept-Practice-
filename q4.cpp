#include <iostream>
using namespace std;
#include <cstring>
class Car {
private:
    char company[20];
    int year,model;

public:
    void setDetails(char *c,int y, int m) {
        strcpy(company,c);
        model = (model,m);
        year = (year,y);
    }

    void getDetails() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car;
    car.setDetails("Toyota", 4, 2020);
    car.getDetails();
    return 0;
}
