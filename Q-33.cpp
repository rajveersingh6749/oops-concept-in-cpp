// Q 33. What is Association, Aggregation, and Composition?

/*

| Relationship | Description                         | Example              | Ownership |
| ------------ | ----------------------------------- | -------------------- | --------- |
| Association  | General relationship                | Teacher–Student      | None      |
| Aggregation  | Has-a (part-whole, but independent) | Department–Professor | Weak      |
| Composition  | Has-a (part-whole, dependent)       | Car–Engine           | Strong    |

*/

// Example:
#include <iostream>
#include <vector>
using namespace std;

class Professor {
public:
    string name;
    Professor(string n): name(n) {}
};

class Department {
private:
    vector<Professor*> profs;  // Aggregation
public:
    void addProfessor(Professor* p) {
        profs.push_back(p);
    }
    void show() {
        for(auto p : profs)
            cout << p->name << endl;
    }
};

int main() {
    Professor p1("Dr. Raj"), p2("Dr. Meera");
    Department d;
    d.addProfessor(&p1);
    d.addProfessor(&p2);
    d.show();
    return 0;
}

// ➡️ Professors exist even if the Department object is destroyed — this is aggregation.