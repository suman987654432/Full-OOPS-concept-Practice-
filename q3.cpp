#include <iostream>
#include <string.h>
using namespace std;
class Person {
    char name[20];
    int age;
    char country[20];

public:
    void setDetails(char *n, int a, char *c) {
        strcpy(name, n);
        age = a;
        strcpy(country, c);
    }
    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};
int main() {
    Person p;
    p.setDetails("John", 25, "USA");
    p.getDetails();
}
