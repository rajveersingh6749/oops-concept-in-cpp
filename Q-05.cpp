/*
Q 5. What is a Constructor? What are its Types?

Definition:
A constructor is a special method with the same name as the class, used to initialize objects.

Types:

1. Default Constructor

2. Parameterized Constructor

3. Copy Constructor

*/

// Example:
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << name << " - " << age << endl;
    }
};

int main() {
    Student s1; 
    Student s2("Raj", 21);
    Student s3 = s2;  // copy constructor

    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}
