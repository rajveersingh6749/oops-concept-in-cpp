/*
Q 30. What is the difference between Interface and Abstract Class?

Definition:
Both define abstract behavior, but with key differences:

| Feature      | Abstract Class                            | Interface (in C++ via Pure Virtual Class) |
| ------------ | ----------------------------------------- | ----------------------------------------- |
| Contains     | Both implemented and pure virtual methods | Only pure virtual methods                 |
| Data Members | Can have data                             | Usually no data members                   |
| Constructor  | Can have one                              | Cannot have one                           |
| Inheritance  | Single inheritance                        | Multiple interfaces allowed               |

*/

// Example:
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0;  // pure virtual
    void info() { cout << "I am a shape\n"; }
};

// Interface-like class
class Drawable {
public:
    virtual void draw() = 0;
};

class Circle : public Shape, public Drawable {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle c;
    c.info();
    c.draw();
    return 0;
}
