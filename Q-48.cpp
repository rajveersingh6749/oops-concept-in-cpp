/*
🔒 7. Static Members, Friend Functions, and Const Correctness
✅ What they test:

Your understanding of design subtleties.

🔹 Common Scenarios

**1. Static Member Usage **

Count number of active objects using a static variable in the class.

**2. Friend Function **

Give access to private data of two classes using a friend function.

**3. Const Member Functions **

Explain why int getValue() const is safer.
*/

// Answer:
/*
🧠 7. Abstract Class & Pure Virtual Functions
💬 How to Start Answering

“Abstract classes define an interface but not implementation. They’re used when we want derived classes to provide specific behavior.”
*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual
};

class Circle : public Shape {
    int r;
public:
    Circle(int radius) : r(radius) {}
    void area() override {
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s = new Circle(5);
    s->area();
    delete s;
}

/*
✅ Explain

Shape is an abstract class.

Circle implements its behavior.

Demonstrates abstraction.
*/