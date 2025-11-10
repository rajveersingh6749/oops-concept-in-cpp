/*

Q 11. How do getters and setters help in encapsulation?

Definition:
Getters and setters are public methods used to read and write private data safely, often including checks or validations.

*/

// Example:
#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
public:
    void setSalary(int s) {
        if (s > 0)
            salary = s;
        else
            cout << "Invalid salary!" << endl;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e;
    e.setSalary(50000);
    cout << "Salary: " << e.getSalary() << endl;
    
    return 0;
}
