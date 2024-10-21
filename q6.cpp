#include <iostream>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;

    }

    void checkTriangleType(int side1, int side2, int side3) {
        if (side1 == side2 && side2 == side3)
            cout << "Equilateral Triangle" << endl;
        else if (side1 == side2 || side1 == side3 || side2 == side3)
            cout << "Isosceles Triangle" << endl;
        else
            cout << "Scalene Triangle" << endl;
    }
};
int main() {
    Triangle t;

    t.checkTriangleType(4,4,5);
    return 0;
}
