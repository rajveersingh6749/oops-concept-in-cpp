/*
Q 1. What is Object-Oriented Programming (OOP)?

Definition:
OOP is a programming paradigm based on the concept of “objects,” which contain data (attributes) and functions (methods). It helps in modularity, reusability, and scalability of code.
*/

// Example:
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void display() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car obj;
    obj.brand = "Tesla";
    obj.display();
    
    return 0;
}
