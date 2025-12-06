#include <iostream>
#include <vector>
#include "PrintedMedia.h"
#include "Book.h"
#include "Magazine.h"
#include "BookSet.h"

using namespace std;

int main() {
    // Vector of pointers to the Abstract Base Class
    vector<PrintedMedia*> library;

    // 1. Add a Book (Already done for you)
    library.push_back(new Book("The Great Gatsby", 12.99, "F. Scott Fitzgerald", "978-0743273565"));

    // 2. TODO: Add a Magazine (Uncomment when Magazine is implemented)
    // library.push_back(new Magazine("National Geographic", 6.99, "August", 205));

    // 3. TODO: Add a BookSet (Uncomment when BookSet is implemented)
    // library.push_back(new BookSet("Harry Potter", 25.50, "J.K. Rowling", "555-12345", 1));


    // PRINT THE INVENTORY
    cout << "--- BOOKSTORE INVENTORY ---" << endl;

    // Polymorphism in action:
    for (size_t i = 0; i < library.size(); i++) {
        library[i]->printDetails();
    }

    // Cleanup: Delete memory
    for (size_t i = 0; i < library.size(); i++) {
        delete library[i];
    }
    library.clear();

    return 0;
}