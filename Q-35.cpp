/*
Q 35. How do Constructors work in Inheritance?

Explanation:

    -Base class constructor executes first, then derived class constructor.

    -Order of destruction is reverse — derived → base.
*/

// Example:
#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor\n"; }
    ~Base() { cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

int main() {
    Derived d;
    return 0;
}
