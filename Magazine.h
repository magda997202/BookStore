#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "PrintedMedia.h"
#include <string>

class Magazine : public PrintedMedia {
private:
    std::string month;
    int issueNum;

public:
    // TODO: Declare the Constructor (needs title, price, month, issueNum)
    
    // TODO: Declare the override for printDetails()
};

#endif