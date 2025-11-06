/*
🧬 2. Inheritance Scenarios
✅ What they test:

Understanding of “is-a” relationships, code reuse, and constructor behavior.

🔹 Common Scenarios

**1. Vehicle Hierarchy **

-Base class Vehicle, derived classes Car, Bike
-Each derived class overrides startEngine()
-Demonstrate use of protected members and constructor chaining.

**2. Employee Hierarchy **

-Base: Employee
-Derived: Manager, Engineer
-Common attributes (id, name, salary)
-Derived add specific ones (bonus, department)
-Show superclass constructor called automatically.

** 3. Shape Hierarchy **

-Base class Shape with area() and perimeter() as virtual functions.
-Derived classes: Circle, Rectangle, Triangle.

🧠 Follow-up questions

When should you use public vs private inheritance?

Can constructors be inherited?

What happens if you don’t make base destructor virtual?
*/

// Answer:
/*
🧬 2. Inheritance
💬 How to Start Answering

“Inheritance allows us to reuse and extend existing code. For example, I can show a base class Vehicle and derived classes Car and Bike.”
*/

#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() { cout << "Vehicle started\n"; }
};

class Car : public Vehicle {
public:
    void honk() { cout << "Car honks 🚗\n"; }
};

int main() {
    Car c;
    c.start(); // from base
    c.honk();  // from derived
}

/*
✅ Explain

Car inherits from Vehicle.

We get code reuse (start() method reused).

Demonstrates “is-a” relationship.

🧠 Follow-up

If they ask about constructor order → “Base constructors run first, then derived.”
*/