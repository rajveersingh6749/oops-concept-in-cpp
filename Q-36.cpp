/*
Q 36. How is OOP implemented in C++?

Explanation:
C++ is a multi-paradigm language (supports both procedural and OOP).

OOP in C++ is implemented using:

    -Classes and Objects

    -Encapsulation via access specifiers

    -Inheritance using :

    -Polymorphism using virtual functions

    -Abstraction via abstract classes (pure virtual functions)
*/

// Example:
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // abstraction
};

class Circle : public Shape { // inheritance
private:
    int radius; // encapsulation
public:
    Circle(int r) : radius(r) {}
    void draw() override { cout << "Drawing circle of radius " << radius << endl; }
};

int main() {
    Shape* s = new Circle(10);
    s->draw();  // polymorphism (runtime)
    delete s;
    return 0;
}
