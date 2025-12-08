#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "PrintedMedia.h"
#include <string>
//
// Created by User on 12/06/2025.
//
// Author: Magda Hussein
// Date: 12/06/2025
// Assignment: Book Store
class Magazine : public PrintedMedia {
private:
    std::string month;
    int issueNum;

public:
    Magazine(std::string title, double price, std::string month, int issueNum);
    void printDetails() override;
};

#endif
