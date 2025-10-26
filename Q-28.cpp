/*
Q 28. Can we override a static method?

No.
Static methods belong to the class, not to objects, so they cannot be overridden.
They can only be hidden if a derived class defines a static function with the same name.
*/

// Example:
#include <iostream>
using namespace std;

class Base {
public:
    static void print() {
        cout << "Base static print" << endl;
    }
};

class Derived : public Base {
public:
    static void print() {
        cout << "Derived static print" << endl;
    }
};

int main() {
    Base::print();    // Base version
    Derived::print(); // Derived version (hiding, not overriding)
    return 0;
}
