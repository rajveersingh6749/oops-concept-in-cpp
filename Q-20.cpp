/*
Q 20. Can a Constructor be Inherited?

Answer:
Constructors cannot be inherited directly, but a derived class can call the base class constructor using an initializer list.
*/

// Example:
#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) { 
        cout << "Base constructor called: " << x << endl; 
    }
};

class Derived : public Base {
public:
    Derived(int y) : Base(y) {
        cout << "Derived constructor called" << endl;
    }
};

int main() {
    Derived d(10);
    
    return 0;
}
