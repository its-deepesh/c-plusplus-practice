#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;       
    int accountNumber;      
    double balance;       

public:
    BankAccount(string accName, int accNumber, double initialBalance) {
        name = accName;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "Remaining balance: $" << balance << endl;
        } else if (amount <= 0) {
            cout << "Withdrawal amount must be positive!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccount() const {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    int balance, accountNumber;
    string name;

    cout << "Enter your name, accNo, balance: ";
    cin >> name >> accountNumber >> balance;

    BankAccount myAccount(name, accountNumber, balance);
    myAccount.displayAccount();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(2000.0);
    myAccount.displayAccount();
    return 0;
}
