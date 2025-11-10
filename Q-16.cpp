/*

Q 16. What is Inheritance?

Definition:
Inheritance is an OOP concept that allows one class (child/derived) to inherit the properties and behavior (data and methods) of another class (parent/base).
It promotes code reusability and hierarchical relationships.

*/

// Example:
#include <iostream>
using namespace std;

class Animal {   // Base class
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {   // Derived class
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // inherited method
    d.bark(); // own method
    
    return 0;
}
