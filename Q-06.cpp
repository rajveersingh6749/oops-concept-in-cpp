/*
Q. 6. What is a Destructor?

Definition:
Destructor is a special method that is called automatically when an object goes out of scope or is deleted, used to release resources.

*/

// Example:
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { 
        cout << "Constructor called\n"; 
    }
    ~Demo() { 
        cout << "Destructor called\n"; 
    }
};

int main() {
    Demo obj;
    
    return 0;
}
