

#include <iostream>
using namespace std;

class BankAccount {

    int accn;       
    double bal;      

public:
    
    void setDetails(int a, double b) {
        accn = a;
        bal = b;
    }
    void deposit(double amount) {
        bal = bal + amount; 
    }

    
    void withdraw(double amount) {
        if (bal >= amount) { 
            bal = bal - amount;
        } else {
            cout << "Insufficient balance" << endl; 
        }
    }

    
    void getBalance() {
        cout << "Account number: " << accn << endl; 
        cout << "Balance: " << bal << endl;
    }
};

int main() {
    BankAccount ba;

    int a;
    double b; 
    double depositAmount;
        double withdrawAmount;
    cout << "Enter account number: ";
    cin >> a; 
    cout << "Enter balance: ";
    cin >> b; 
  

   
    cout << "Enter amount to deposit: ";
    cin >> depositAmount; 
   


    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    ba.withdraw(withdrawAmount);
    ba.deposit(depositAmount);
    ba.setDetails(a, b);
    ba.getBalance(); 

    return 0;
}

