/*
Q 25. What is Method Overloading? (Compile-time Polymorphism)

Definition:
When multiple functions have the same name but different parameters (type or number).
*/

// Example:
#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(double b) {
        cout << "Double: " << b << endl;
    }
    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(10.5);
    p.show("Hello");
    return 0;
}

// ➡️ The compiler decides which version to call at compile time.