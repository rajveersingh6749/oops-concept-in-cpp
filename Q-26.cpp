/*
Q 26. What is Method Overriding? (Run-time Polymorphism)

Definition:
When a derived class provides its own implementation of a virtual function defined in the base class.
*/

// Example:
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {  // virtual function
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->speak();  // Calls Dog’s speak() at runtime
    delete a;
    return 0;
}

// ➡️ The decision about which function to call happens at runtime using vtable (virtual table) mechanism.