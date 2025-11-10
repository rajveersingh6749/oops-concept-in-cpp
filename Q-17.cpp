/*

Q 17. What are the types of inheritance?

1. Single Inheritance – One base → one derived

2. Multiple Inheritance – Multiple bases → one derived

3. Multilevel Inheritance – Derived class becomes base for another

4. Hierarchical Inheritance – One base → multiple derived

5. Hybrid Inheritance – Combination of multiple types

*/

// Let’s see examples for each 👇

// 🧩 Single Inheritance
/*
#include <iostream>
using namespace std;

class A {
    public:
    void showA() { 
        cout << "Class A" << endl; 
    }
};

class B : public A {
    public:
    void showB() { 
        cout << "Class B" << endl; 
    }
};
*/


// 🧩 Multiple Inheritance
/*
#include <iostream>
using namespace std;

class A {
    public:
    void showA() { 
        cout << "Class A" << endl;
    }
};
class B {
    public:
    void showB() {
        cout << "Class B" << endl; 
    }
};
class C : public A, public B {
    public:
    void showC() { 
        cout << "Class C" << endl; 
    }
};
*/

// 🧩 Multilevel Inheritance
/*
#include <iostream>
using namespace std;

class A { 
    public: 
    void showA() { 
        cout << "A" << endl; 
    } 
};
class B : public A { 
    public: 
    void showB() { 
        cout << "B" << endl; 
    } 
};
class C : public B { 
    public: 
    void showC() { 
        cout << "C" << endl;
    } 
};
*/


// 🧩 Hierarchical Inheritance
/*
#include <iostream>
using namespace std;

class A { 
    public: 
    void baseFunc() { 
        cout << "Base class" << endl; 
    } 
};
class B : public A { 
    public: 
    void derivedB() { 
        cout << "Derived B" << endl; 
    } 
};
class C : public A { 
    public: 
    void derivedC() { 
        cout << "Derived C" << endl; 
    } 
};
*/

// 🧩 Hybrid Inheritance
/*
Combination of multiple types (e.g., multilevel + multiple).
Handled carefully to avoid ambiguity — often solved using virtual base classes.
*/