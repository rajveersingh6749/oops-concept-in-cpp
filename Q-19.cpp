/*

Q 19. What is Method Overriding?

Definition:
When a derived class provides a new implementation of a method already defined in its base class.

*/

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Bark!" << endl; }
};

int main() {
    Animal* a = new Dog();
    a->sound();  // Calls Dog’s sound() at runtime
    delete a;
    return 0;
}
