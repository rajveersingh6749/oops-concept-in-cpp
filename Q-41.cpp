// Q 3. Inheritance vs Composition Example

/*

Question:
What would you use — inheritance or composition — if a class “Engine” is part of a “Car”?

Answer:
✅ Use composition, not inheritance.
Because an engine is a part of a car (HAS-A relationship), not a type of car (IS-A relationship).

*/

#include <iostream>
using namespace std;

class Engine {
public:
    void start() { 
        cout << "Engine starting..." << endl; 
    }
};

class Car {
private:
    Engine engine;  // Composition: Car HAS an Engine
public:
    void start() {
        engine.start();
        cout << "Car ready to drive!" << endl;
    }
};

int main() {
    Car c;
    c.start();
    
    return 0;
}

/*
Key Point:
If one object owns another and is responsible for its lifetime → Composition.
If one object extends another → Inheritance.
*/