#include <iostream>
#include <vector>
#include "PrintedMedia.h"
#include "Book.h"
#include "Magazine.h"
#include "BookSet.h"
//
// Created by User on 12/06/2025.
//
// Author: Magda Hussein
// Date: 12/06/2025
// Assignment: Book Store
using namespace std;

int main() {
    // Vector of pointers to the Abstract Base Class
    vector<PrintedMedia*> library;

    // 1. Add a Book (Already done for you)
    library.push_back(new Book("The Great Gatsby", 12.99, "F. Scott Fitzgerald", "978-0743273565"));

    // 2. Add a Magazine
    library.push_back(new Magazine("National Geographic", 6.99, "August", 205));

    // 3. Add a BookSet
    library.push_back(new BookSet("Harry Potter", 25.50, "J.K. Rowling", "555-12345", 1));

    // 2. Add a Magazine - My choice
    library.push_back(new Magazine("Forbes", 8.99, "Bi-weekly", 645));


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