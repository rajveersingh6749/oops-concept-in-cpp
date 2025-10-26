/*

Q 10. How does Encapsulation improve data security?

Explanation:
By keeping data private, encapsulation ensures that internal object data cannot be accessed or changed directly from outside the class.
Access is only through public functions (getters/setters) which can include validation or logic.

*/

// Example:
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    void deposit(double amount) {
        if(amount > 0)
            balance += amount;
    }
    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(200);
    cout << "Current balance: " << acc.getBalance() << endl;
    return 0;
}

// ➡️ Data is secure because balance cannot be modified directly.
