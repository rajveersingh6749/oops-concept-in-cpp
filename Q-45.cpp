/*
🧱 4. Encapsulation & Access Modifier Scenarios
✅ What they test:

Data hiding and access control understanding.

🔹 Common Scenarios

1. Why keep data members private in a Student or BankAccount class?

2. What happens if you make everything public?

3. How would you enforce that a class’s data can’t be changed directly (e.g. readonly properties)?

4. Design a class that allows only reading a variable once initialized (const usage).
*/

// Answer:
/*
⚙️ 4. Constructors, Destructors & Deep Copy
💬 How to Start Answering

“Constructors initialize objects, destructors clean up. If a class uses dynamic memory, we must define our own copy constructor and destructor to avoid shallow copies.”
*/

#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char* name;
public:
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Deep copy constructor
    Student(const Student& s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
    }

    ~Student() {
        delete[] name;
    }

    void show() { 
        cout << "Name: " << name << endl; 
    }
};

int main() {
    Student s1("Raj");
    Student s2 = s1; // deep copy
    s2.show();
}

/*
✅ Explain

Copy constructor performs deep copy.

Destructor prevents memory leaks.

Without these, both objects share same memory → corruption.
*/