/*

Q 14. How do you achieve abstraction in C++?

✅ Using Pure Virtual Functions / Abstract Classes

Explanation:
A pure virtual function is a virtual function with = 0 in its declaration.
A class containing one or more pure virtual functions becomes an abstract class.

*/

// Example:
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();
    delete a;
    
    return 0;
}
