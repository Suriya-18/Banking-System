#include <iostream>
using namespace std;

class BankAccount {
    string owner;
    double balance;

public:
    BankAccount(string name, double initial_balance) {
        owner = name;
        balance = initial_balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) 
            cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Suriya", 5000);
    int choice;
    double amount;
    
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Enter amount: "; cin >> amount; acc.deposit(amount); break;
            case 2: cout << "Enter amount: "; cin >> amount; acc.withdraw(amount); break;
            case 3: acc.checkBalance(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    
    return 0;
}
