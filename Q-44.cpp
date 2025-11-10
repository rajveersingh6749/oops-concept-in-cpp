/*
🌀 3. Polymorphism Scenarios
✅ What they test:

Understanding of function overriding, runtime vs compile-time binding.

🔹 Common Scenarios

** 1. Shape Example (continued) **

-Base class pointer Shape* s;
-Assign s = new Circle();, s->area();
-Explain runtime polymorphism (virtual functions).

** 2. Payment System Example **

-Base class Payment with processPayment() (virtual)
-Derived classes CreditCardPayment, UPIPayment, etc.
-Demonstrate function overriding.

** 3. Animal Sound Example **

-Base Animal with makeSound()
-Derived Dog, Cat, Cow override it.
-Show how polymorphism removes need for multiple if conditions.

🧠 Follow-up questions

What happens if you forget to use virtual?

What’s the difference between overriding and overloading?

Can constructors be virtual?
*/

// Answer:
/*
🌀 3. Polymorphism (Runtime)
💬 How to Start Answering

“Polymorphism lets the same interface represent different behaviors. I’ll show this using virtual functions.”
*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { 
        cout << "Animal sound\n"; 
    }
};

class Dog : public Animal {
public:
    void sound() override { 
        cout << "Dog barks 🐶\n"; 
    }
};

class Cat : public Animal {
public:
    void sound() override { 
        cout << "Cat meows 🐱\n"; 
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->sound(); // Dog barks
    a2->sound(); // Cat meows

    delete a1;
    delete a2;
}

/*
✅ Explain

virtual ensures runtime binding.

Pointer of base class decides object’s behavior dynamically.

Demonstrates runtime polymorphism.

🧠 Follow-up

“If I remove virtual, then compile-time binding happens — base method runs.”
*/