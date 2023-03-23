#ifndef CURSEACH_CARRIAGE_H
#define CURSEACH_CARRIAGE_H


#include "Train.h"

#include<list>

enum Category {
    plats,
    coupe,
    firstClass
};


struct CarriageTags {
    Category category;
    bool hasConditioner;
    bool isReturnable;
};

class Carriage {
    bool seats[54];
    Train *train;
    CarriageTags tags;
};


#endif //CURSEACH_CARRIAGE_H