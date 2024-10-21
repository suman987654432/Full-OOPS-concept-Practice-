#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    double area() {
        cout << "Enter radius for area is : ";
        cin >> radius;
        return 3.14 * radius * radius;
    }

    double circumference() {
        cout << "Enter radius for circumference is : ";
        cin >> radius;
        return 2 * 3.14 * radius;
    }
};
int main() {
    Circle circle;
    cout << circle.area() << "\n";
    cout << circle.circumference() << "\n";
}
