/*
⚙️ 5. Constructor & Destructor Scenarios
✅ What they test:

Memory handling, initialization order, and resource management.

🔹 Common Scenarios

**1. Deep Copy vs Shallow Copy **

Example: class with pointer data member
Implement custom copy constructor & destructor.

**2. Dynamic Memory Management **

When to write your own destructor?
How to avoid memory leaks?

**3. Initialization Order **

How are constructors called in inheritance? (Base → Derived)
How are destructors called? (Reverse order)
*/

// Answer:
/*
🔁 5. Operator Overloading
💬 How to Start Answering

“Operator overloading allows defining custom behavior for operators. For example, I can overload + for adding two complex numbers.”
*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void show() { cout << real << " + " << imag << "i\n"; }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    c3.show();
}

/*
✅ Explain

The + operator is overloaded for object addition.

Overloading gives user-defined meaning.
*/