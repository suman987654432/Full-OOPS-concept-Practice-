
#include <iostream>
using namespace std;

class AddNumbers {

    int num;
public:
    void setNumber(int n) {
        num = n;
    }

    int getNumber() {
        return num;
    }
    AddNumbers operator+(AddNumbers a) {
        AddNumbers result;
        result.num = num + a.num;
        return result;
    }
};
int main() {
    AddNumbers obj1, obj2, sum;
    obj1.setNumber(5);
    obj2.setNumber(10);
    
    sum = obj1 + obj2;

    cout << "Sum: " << sum.getNumber() << endl;
    return 0;
}
