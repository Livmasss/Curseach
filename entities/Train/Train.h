#ifndef CURSEACH_TRAIN_H
#define CURSEACH_TRAIN_H

#include "Carriage.h"
#include <vector>
#include <string>

using namespace std;
struct TrainTags {
private:
    bool hasRestaurant;
    bool petsPermission;
public:
    TrainTags(bool restaurant = false, bool hasPetsPermission = false);
};

class Train {
private:
    vector<Carriage *> cars;
    string locate;
    TrainTags *tags;
public:
    Train(vector<Carriage *> cars_ = vector<Carriage *>(), TrainTags *tags_ = new TrainTags());
    int getLength();
    Carriage *getCarriage(int index);
    TrainTags *getTrainTags();
};


#endif //CURSEACH_TRAIN_H
