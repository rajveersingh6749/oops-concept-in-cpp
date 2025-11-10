/*
🧩 1. Class Design Scenarios (Encapsulation + Abstraction)
✅ What they test:

Whether you can think in objects, hide internal details, and expose only what’s needed.

🔹 Common Scenarios

**1. Design a class for a Bank Account**

-Data: accountNumber, balance
-Functions: deposit(), withdraw(), displayBalance()
-Use private data members and public methods (encapsulation).

**2. Design a class for Student Information**

-Store roll number, marks, name
-Add methods for calculating grade and printing details
-Discuss why data members should be private and how getters/setters help.

**3. ATM or Payment System**

-Different account types (Savings, Current)
-Common operations like withdraw(), deposit(), getBalance()
-Use abstraction (pure virtual functions for interface design).

*/


// Answer:
/*
🧩 1. Encapsulation & Abstraction
💬 How to Start Answering

“Encapsulation means binding data and methods together while hiding implementation details. I’ll show that using a simple class where data is private and accessed through public methods.”

🧠 Concept

Hide data → access through getters/setters → prevents misuse.
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    double getBalance() const { 
        return balance; 
    }
};

int main() {
    BankAccount acc("123ABC", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    cout << "Final Balance: " << acc.getBalance();
}

/*
✅ Key Points to Explain

private ensures data hiding.

public methods provide controlled access.

This is encapsulation in action.
*/