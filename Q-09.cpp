/*

Q 9. What is Encapsulation?

Definition:
Encapsulation is the process of binding data (variables) and functions (methods) into a single unit (class) and restricting direct access to some components.

It protects data from unintended modification — also called data hiding.

*/

// Example:
#include <iostream>
using namespace std;

class Student {
private:
    int age;   // private data (hidden from outside)
public:
    void setAge(int a) {  // setter
        if(a > 0) age = a;
    }
    int getAge() {  // getter
        return age;
    }
};

int main() {
    Student s;
    s.setAge(21);
    cout << "Student age: " << s.getAge() << endl;
    return 0;
}
