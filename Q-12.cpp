/*

Q 12. What is Abstraction?

Definition:
Abstraction is the process of hiding complex implementation details and showing only the essential features of an object.

It focuses on what an object does, rather than how it does it.

Example in real life:
When you drive a car, you just use the steering wheel and pedals without worrying about how the engine works internally.

*/

// Example:
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // pure virtual function (no implementation)
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}

// ➡️ Here, Shape provides the interface, and Circle provides the implementation.