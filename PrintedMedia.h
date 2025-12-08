#ifndef PRINTEDMEDIA_H
#define PRINTEDMEDIA_H
//
// Created by User on 12/06/2025.
//
// Author: Magda Hussein
// Date: 12/06/2025
// Assignment: Book Store
#include <string>
#include <iostream>

class PrintedMedia {
protected:
    std::string title;
    double price;

public:
    // Constructor
    PrintedMedia(std::string t, double p);

    // Virtual Destructor (Important for polymorphism)
    virtual ~PrintedMedia() {}

    // Pure Virtual Function
    virtual void printDetails() = 0;
};

#endif