#include "BookSet.h"
#include <iostream>

BookSet::BookSet(std::string t, double p, std::string a, std::string i, int v)
    : Book(t, p, a, i), volume(v){}

void BookSet::printDetails() {
    // TODO: Print the details. 
    std::cout << "Type: BOOK SET (Vol " << volume << ")" << std::endl;
    Book::printDetails();
}