#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    bool isLeapYear(int year) {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

public:
   
    bool isValidDate(int day, int month, int year) {
        if (month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        if (month == 2 && day > (isLeapYear(year) ? 29 : 28))
            return false;
        return true;
    }
};

int main() {
    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    Date date;
    if (date.isValidDate(day, month, year))
        cout << "Valid Date" << endl;
    else
        cout << "Invalid Date" << endl;

    return 0;
}
