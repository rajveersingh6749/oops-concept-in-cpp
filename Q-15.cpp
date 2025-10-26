/*

Q 15. Can we create an object of an abstract class? Why not?

Answer:
No, you cannot create an object of an abstract class because it has one or more pure virtual functions without implementation.

Reason:
An abstract class serves as a blueprint, not a complete definition.

*/

// Example:
#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void drive() = 0; // pure virtual
};

int main() {
    // Vehicle v; // ❌ Error: Cannot instantiate abstract class
    return 0;
}

// ✅ You can only create a pointer or reference of the abstract class pointing to a derived object.