#include "Magazine.h"
#include <iostream>
//
// Created by User on 12/06/2025.
//
// Author: Magda Hussein
// Date: 12/06/2025
// Assignment: Book Store
Magazine::Magazine(std::string t, double p, std::string m, int i)
    : PrintedMedia(t, p), month(m), issueNum(i) {}

void Magazine::printDetails() {
    std::cout << "Type: MAGAZINE" << std::endl;
    std::cout << "Title: " << title << " | Price: $" << price << std::endl;
    std::cout << "Month: " << month << " | Issue: " << issueNum << std::endl;
    std::cout << "-----------------------------" << std::endl;
}
