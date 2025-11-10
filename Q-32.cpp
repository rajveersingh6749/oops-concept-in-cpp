// Q 32. How does Composition differ from Inheritance?

/*

| Concept      | Inheritance                 | Composition                          |
| ------------ | --------------------------- | ------------------------------------ |
| Relationship | “is-a”                      | “has-a”                              |
| Coupling     | Tight                       | Loose                                |
| Reusability  | Uses base features directly | Reuses by creating contained objects |
| Example      | Dog is-a Animal             | Car has-a Engine                     |

*/

// Example:
#include <iostream>
using namespace std;

class Engine {
public:
    void start() { 
        cout << "Engine started\n"; 
    }
};

class Car {
private:
    Engine eng; // Composition
public:
    void drive() {
        eng.start();
        cout << "Car is driving\n";
    }
};

int main() {
    Car c;
    c.drive();
    
    return 0;
}
