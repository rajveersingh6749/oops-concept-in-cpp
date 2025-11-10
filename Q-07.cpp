// Q 7. Difference between Compile-time and Run-time Polymorphism
/*

| Compile-time Polymorphism                    | Run-time Polymorphism                               |
| -------------------------------------------- | --------------------------------------------------- |
| Resolved during compilation                  | Resolved during runtime                             |
| Achieved by function/constructor overloading | Achieved by function overriding (virtual functions) |


*/

// Example:
#include <iostream>
using namespace std;

// Compile-time (Function Overloading)
class Example {
public:
    void show(int x) { 
        cout << "Integer: " << x << endl; 
    }
    void show(double y) { 
        cout << "Double: " << y << endl; 
    }
};

// Run-time (Function Overriding)
class Base {
public:
    virtual void display() { 
        cout << "Base class" << endl; 
    }
};
class Derived : public Base {
public:
    void display() override { 
        cout << "Derived class" << endl;
    }
};

int main() {
    Example e;
    e.show(10);
    e.show(10.5);

    Base *b;
    Derived d;
    b = &d;
    b->display(); // Runtime binding
    
    return 0;
}
