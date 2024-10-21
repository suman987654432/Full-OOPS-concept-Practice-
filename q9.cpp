#include <iostream>
#include <cstring> 
using namespace std;

class Student {

    char name[20];
    int sclass;
    int rollNumber;
    int marks;

   
    char calculateGrade(int marks) {
        if (marks >= 90)
            return 'A';
        else if (marks >= 75)
            return 'B';
        else if (marks >= 50)
            return 'C';
        else
            return 'F';
    }

public:
  
    void setDetails(char* n, int c, int r, int m) {
        strcpy(name, n);  
        sclass = c;
        rollNumber = r;
        marks = m;
    }


    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << sclass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade(marks) << endl; 
    }
};

int main() {
    Student s;
    s.setDetails("Mike", 2, 101, 85); 
    s.displayInfo(); 
    return 0;
}
