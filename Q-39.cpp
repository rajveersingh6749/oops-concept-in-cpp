
// Scenario-Based OOP Questions

/*
Q 1. Designing a Class for a “Car” (Encapsulation + Inheritance)

Question:
If you were designing a class for a “Car,” how would you implement encapsulation and inheritance?

Answer Explanation:

    -Encapsulation: Keep attributes private (speed, fuelLevel), use getters and setters.

    -Inheritance: Car can inherit from a generic Vehicle base class.
*/

/*
1. “Car” Class Design — Approach Explanation (Encapsulation + Inheritance)

🔹 Step 1: Understand the requirement

The interviewer is testing if you know:

    -Encapsulation → hiding data (like speed, fuel level)

    -Inheritance → using a base class like Vehicle

So, before coding, start by saying something like:

    “I’ll create a base class called Vehicle that will contain common properties and behaviors shared by all vehicles — for example, a brand name and a start function.
    Then, I’ll derive a class Car from Vehicle that will add car-specific details like speed, fuelLevel, and methods like refuel() or setSpeed().
    I’ll use encapsulation by keeping these data members private and exposing them through getters and setters.”

🔹 Step 2: Show your OOP mapping

| Concept                 | Implementation                                         |
| ----------------------- | ------------------------------------------------------ |
| Encapsulation           | Private members: `speed`, `fuelLevel`; Getters/Setters |
| Inheritance             | `Car` inherits from `Vehicle`                          |
| Polymorphism (optional) | Override the `start()` function                        |
| Composition (optional)  | `Car` can have an `Engine` object                      |


🔹 Step 3: Short verbal flow before code

You can summarize it to the interviewer like this:

    “So the idea is that Car is a type of Vehicle — that’s inheritance.
    Each car has private details like speed and fuel level — that’s encapsulation.
    And I can override the start() method in Car to show polymorphism.
    Here’s how I would implement that in C++…”

(Then go ahead and write the code like we did before.)
*/

// Example:
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}
    virtual void start() { 
        cout << brand << " vehicle starting..." << endl; 
    }
};

class Car : public Vehicle {
private:
    int speed;
    float fuelLevel;
public:
    Car(string b, int s, float f) : Vehicle(b), speed(s), fuelLevel(f) {}

    void setSpeed(int s) { // encapsulation
        speed = s;
    }         
    int getSpeed() const { 
        return speed; 
    }

    void refuel(float amount) { 
        fuelLevel += amount; 
    }

    void start() override {                     // polymorphism
        cout << brand << " car starting with speed " << speed << " km/h." << endl;
    }
};

int main() {
    Car c("Tesla", 120, 75.5);
    c.start();
    c.setSpeed(150);
    cout << "Current Speed: " << c.getSpeed() << " km/h" << endl;
    
    return 0;
}
