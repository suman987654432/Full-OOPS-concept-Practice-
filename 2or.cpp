#include <iostream>
using namespace std;

class Complex {
private:
    float real;   // Real part of the complex number
    float imag;   // Imaginary part of the complex number

public:
    // Constructor to initialize complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the + operator to add two complex numbers
    Complex operator + (const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.2, 4.5);  // First complex number: 3.2 + 4.5i
    Complex c2(2.3, 3.1);  // Second complex number: 2.3 + 3.1i

    Complex c3 = c1 + c2;  // Using overloaded + operator to add c1 and c2

    cout << "The sum of ";
    c1.display();
    cout << "and ";
    c2.display();
    cout << "is: ";
    c3.display();

    return 0;
}
