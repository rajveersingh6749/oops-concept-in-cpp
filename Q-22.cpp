/*
Q 22. What is the base (C++) or super (Java) keyword used for?

In C++:
base keyword doesn’t exist directly, but base class constructor or functions can be called explicitly using the scope resolution operator (::).
*/

// Example:
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base display" << endl; 
    }
};

class Derived : public Base {
public:
    void display() {
        Base::display(); // Call base class method
        cout << "Derived display" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    
    return 0;
}
