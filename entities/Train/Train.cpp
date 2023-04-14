#include "Train.h"

#include <utility>

TrainTags::TrainTags(bool restaurant, bool hasPetsPermission) {
    hasRestaurant = restaurant;
    petsPermission = hasPetsPermission;
}

Train::Train(vector<Carriage *> cars_, TrainTags *tags_) {
    cars = std::move(cars_);
    tags = tags_;
}

int Train::getLength() {
    return cars.size();
}

Carriage *Train::getCarriage(int index) {
    return cars.at(index);
}

TrainTags *Train::getTrainTags() {
    return tags;
}