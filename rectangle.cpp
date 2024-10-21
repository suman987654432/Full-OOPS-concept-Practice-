#include <iostream>
using namespace std;

class Rectangle {

    double length, breadth;

public:
  
    double area() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        return length * breadth;
    }

    
    double perimeter() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect;
    cout << rect.area() << "\n";
    cout  << rect.perimeter() << "\n";
}
