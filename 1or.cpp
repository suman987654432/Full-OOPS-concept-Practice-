#include <iostream>
using namespace std;

class MyClass {
private:
    static int objectCount;  // Static member to count objects

public:
    // Constructor increments object count when a new object is created
    MyClass() {
        objectCount++;
    }

    // Static member function to display the object count
    static void count() {
        cout << "Number of objects created: " << objectCount << endl;
    }
};

// Initialize static member variable
int MyClass::objectCount = 0;

int main() {
    // Create objects of MyClass
    MyClass obj1, obj2, obj3;

    // Call the static function to display the object count
    MyClass::count();

    return 0;
}
