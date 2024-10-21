#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    void setDetails(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void calculateSalary(double performanceBonus) {
        salary += performanceBonus;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee e;
    e.setDetails("Alice", 101, 5000.0);
    e.calculateSalary(500.0);
    e.getDetails();
    return 0;
}
