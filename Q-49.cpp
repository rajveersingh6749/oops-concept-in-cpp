/*
🧠 8. Real-Life System Design (OOP Modeling)

(These are higher-level “thinking in OOP” questions for SDE freshers)

**1. Design a Library Management System **

Classes: Book, Library, Member, Librarian

Relationships: Aggregation (Library “has” Books), Inheritance (Member types)

**2. Design a Ride-Sharing App (like Uber) **

Base class: User

Derived: Driver, Passenger

Additional: Ride, Location

Discuss how to use inheritance and composition wisely.

**3. Design an E-commerce System **

Classes: Product, Order, Customer, Cart

Discuss “has-a” vs “is-a” relationships.
*/

// Answer:
/*
🧱 8. Real-Life OOP Design Scenario
💬 How to Start Answering

“I’ll model a simple Library Management System to show OOP thinking — where Library ‘has’ Books and each Book has its own details.”
*/

#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string title;
public:
    Book(string t) : title(t) {}
    string getTitle() const { 
        return title; 
    }
};

class Library {
private:
    vector<Book> books;
public:
    void addBook(const Book& b) { 
        books.push_back(b); 
    }
    void showBooks() {
        cout << "Books in Library:\n";
        for (auto& b : books)
            cout << "- " << b.getTitle() << endl;
    }
};

int main() {
    Library lib;
    lib.addBook(Book("C++ Basics"));
    lib.addBook(Book("OOP Design"));
    lib.showBooks();
}

/*
✅ Explain

Demonstrates composition (Library “has” Books).

Real-life modeling of classes.

Good way to end an OOP round.
*/

