/*
Q 31. What is Multiple Inheritance and why is it not supported in Java?

Definition:
Multiple inheritance means a class inherits from more than one base class.

C++ supports it, but Java doesn’t (to avoid ambiguity known as the Diamond Problem).
*/

// Example:
#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A" << endl; }
};
class B {
public:
    void show() { cout << "Class B" << endl; }
};
class C : public A, public B {
public:
    void display() {
        A::show();  // Resolving ambiguity
        B::show();
    }
};

int main() {
    C obj;
    obj.display();
    return 0;
}

// ➡️ In Java, interfaces are used instead because they avoid this ambiguity.