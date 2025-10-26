// 2. Library Management System (Full OOP Design)

/*
Question:
How would you model a “Library Management System” using OOP concepts?

Answer Explanation:

    -Classes: Book, Member, Library

    -Encapsulation: Keep book details private

    -Inheritance: Specialized member types (Student, Teacher)

    -Polymorphism: Same displayInfo() behaves differently for each class

    -Abstraction: Abstract class LibraryItem
*/


/*
📚 2. “Library Management System” — Approach Explanation (Full OOP Design)


🔹 Step 1: Clarify the goal

    “We’re building a small model to manage library items — like books, magazines, or DVDs — and show how OOP concepts make it modular and reusable.”

🔹 Step 2: Identify entities and relationships

Think in terms of classes and relationships:

    -LibraryItem → Base class (abstraction)

    -Book, Magazine, DVD → Derived classes (inheritance)

    -Library → Has a list of books (composition)


🔹 Step 3: Explain OOP concept mapping

| Concept       | Implementation                                       |
| ------------- | ---------------------------------------------------- |
| Abstraction   | `LibraryItem` as an abstract base class              |
| Inheritance   | `Book`, `Magazine`, etc. inherit from `LibraryItem`  |
| Polymorphism  | `displayInfo()` function overridden in each subclass |
| Encapsulation | Private data like `title`, `author`                  |
| Composition   | `Library` class **has** `Book` objects               |


🔹 Step 4: How to verbally explain before coding

You can say:

    “I’ll use an abstract class LibraryItem to represent anything that can exist in a library. Then classes like Book or Magazine will inherit from it and override a displayInfo() method.
    I’ll keep book details like title and author private — that’s encapsulation.
    The Library class will use a vector to store Book objects — that’s composition.
    This way, my design is modular, extendable, and easy to maintain.”
*/

#include <iostream>
#include <vector>
using namespace std;

// Abstract class (Abstraction)
class LibraryItem {
protected:
    string title;
public:
    LibraryItem(string t) : title(t) {}
    virtual void displayInfo() = 0;
};

// Book class (Inheritance + Encapsulation)
class Book : public LibraryItem {
private:
    string author;
    bool isAvailable;
public:
    Book(string t, string a) : LibraryItem(t), author(a), isAvailable(true) {}

    void borrowBook() { isAvailable = false; }
    void returnBook() { isAvailable = true; }

    void displayInfo() override { // Polymorphism
        cout << "Book: " << title << " by " << author 
             << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

// Library class (Composition)
class Library {
private:
    vector<Book> books; // Composition: Library HAS books
public:
    void addBook(Book b) { books.push_back(b); }
    void showBooks() {
        for (auto &book : books) book.displayInfo();
    }
};

int main() {
    Library lib;
    Book b1("1984", "George Orwell");
    Book b2("Clean Code", "Robert Martin");

    lib.addBook(b1);
    lib.addBook(b2);
    lib.showBooks();
    return 0;
}
