/*
🔁 6. Operator Overloading Scenarios
✅ What they test:

How well you know C++-specific OOP features.

🔹 Common Scenarios

**1. Complex Number Class **

Overload +, -, and << operator to add and display complex numbers.

**2. String Class **

Implement custom MyString with overloaded == and +.

🧠 Follow-up questions

Which operators can’t be overloaded?

Difference between member and non-member operator overloads?
*/

// Answer:

/*
🔒 6. Static Members & Friend Function
💬 How to Start Answering

“Static members are shared by all objects. Friend functions can access private data of a class when needed.”
*/

#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    static int count;

    Box(int w) : width(w) { 
        count++; 
    }

    friend void showWidth(Box b);
};

int Box::count = 0;

void showWidth(Box b) {
    cout << "Box width: " << b.width << endl;
}

int main() {
    Box b1(5), b2(10);
    cout << "Objects created: " << Box::count << endl;
    showWidth(b1);
}

/*
✅ Explain

count tracks objects → shared across all.

Friend allows controlled access to private data.
*/