/*

Q 8. What are Access Specifiers? Why are they used?

Definition:
Access specifiers define the visibility of class members.

| Specifier | Access Level                            |
| --------- | --------------------------------------- |
| public    | Accessible everywhere                   |
| private   | Accessible only within the class        |
| protected | Accessible in class and derived classes |

*/

// Example:
#include <iostream>
using namespace std;

class Example {
private:
    int secret = 10;  // private
public:
    void show() {
        cout << "Secret = " << secret << endl;
    }
};

int main() {
    Example obj;
    obj.show(); // OK
    // cout << obj.secret; // Error: private member
    return 0;
}
