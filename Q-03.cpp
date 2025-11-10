/*

Q 3. What is a Class and an Object?

Class: A user-defined blueprint or template for creating objects.
Object: An instance of a class.

*/

// Example:
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    void showInfo() {
        cout << name << " is " << age << " years old." << endl;
    }
};

int main() {
    Student s1; // Object creation
    s1.name = "Raj";
    s1.age = 21;
    s1.showInfo();
    
    return 0;
}
