#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int age;

public:
    // Constructor to initialize student details
    Student(int r, string n, int a) : rollNo(r), name(n), age(a) {}

    // Function to get the Roll No
    int getRollNo() {
        return rollNo;
    }

    // Function to display student details
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Age: " << age << endl;
    }
};

// Function to add a student to the list
void addStudent(vector<Student>& students, int rollNo, string name, int age) {
    students.push_back(Student(rollNo, name, age));
    cout << "Student added successfully!" << endl;
}

// Function to delete a student by Roll No
void deleteStudent(vector<Student>& students, int rollNo) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getRollNo() == rollNo) {
            students.erase(it);
            cout << "Student with Roll No " << rollNo << " deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student with Roll No " << rollNo << " not found!" << endl;
}

// Function to display all student records
void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students to display." << endl;
    } else {
        for (const auto&student : students) {
            Student.display();
        }
    }
}

int main() {
    vector<Student> students;  // Vector to store list of students

    // Add some students
    addStudent(students, 101, "John", 20);
    addStudent(students, 102, "Emma", 19);
    addStudent(students, 103, "Alex", 21);

    // Display all students
    cout << "All student records:" << endl;
    displayStudents(students);

    // Delete a student by Roll No
    cout << "\nDeleting student with Roll No 102:" << endl;
    deleteStudent(students, 102);

    // Display updated student records
    cout << "\nUpdated student records:" << endl;
    displayStudents(students);

    return 0;
}
