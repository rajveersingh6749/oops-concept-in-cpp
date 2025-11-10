// Q 18. What is the difference between “is-a” and “has-a” relationship?

/*

| Relationship | Description                                                | Example              |
| ------------ | ---------------------------------------------------------- | -------------------- |
| **is-a**     | Achieved through inheritance                               | Dog **is-a** Animal  |
| **has-a**    | Achieved through composition (object inside another class) | Car **has-a** Engine |

*/

// Example:
#include <iostream>
using namespace std;

class Engine {
public:
    void start() { 
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine eng; // Composition (has-a)
public:
    void drive() {
        eng.start();
        cout << "Car is running" << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();

    return 0;
}