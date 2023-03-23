#ifndef CURSEACH_TRAIN_H
#define CURSEACH_TRAIN_H

#include "Carriage.h"
#include "Trip.h"
#include <list>

using namespace std;

struct TrainTags {
    bool hasRestaurant;
    bool petsPermission;
};


class Train {
    Trip *trip;
    list<Carriage *> cars;
    string locate;
    int trainTags[10];
};


#endif //CURSEACH_TRAIN_H
