#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
    int a;
public:
    void input() {
        cout << "Enter number for A: ";
        cin >> a;
    }
    friend void swapValues(A &ob1, B &ob2); 
    void print() { cout << "A: " << a << endl; }
};

class B {
    int b;
public:
    void input() {
        cout << "Enter number for B: ";
        cin >> b;
    }
    friend void swapValues(A &ob1, B &ob2); 
    void print() { cout << "B: " << b << endl; }
};

void swapValues(A &ob1, B &ob2) {
    int temp = ob1.a;
    ob1.a = ob2.b;
    ob2.b = temp;
}

int main() {
    A ob1;
    B ob2;

    ob1.input();
    ob2.input();

    swapValues(ob1, ob2); // Swap values of A and B

    cout << "After swapping:" << endl;
    ob1.print();
    ob2.print();

    return 0;
}
