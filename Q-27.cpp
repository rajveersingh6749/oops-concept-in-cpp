/*
Q 27. Can we overload a constructor?

Yes.
Constructors can be overloaded in C++ just like normal functions, based on parameters.
*/

// Example:
#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    Box() { 
        length = width = height = 0; 
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    int volume() {
        return length * width * height;
    }
};

int main() {
    Box b1;
    Box b2(2, 3, 4);
    cout << "Volume1: " << b1.volume() << endl;
    cout << "Volume2: " << b2.volume() << endl;
    
    return 0;
}
