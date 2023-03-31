#include <iostream>

#include "Carriage.h"

CarriageTags::CarriageTags(Category category_, bool returnable, bool conditioner) {
    category = category_;
    isReturnable = returnable;
    hasConditioner = conditioner;
}

Carriage::Carriage(CarriageTags tags) : tags(tags) {
    int n;
    switch (tags.getCategory()) {
        case plats: n = PLATS_SEAT_NUMBER;
            break;
        case coupe: n = COUPE_SEAT_NUMBER;
            break;
        case firstClass: n = FC_SEAT_NUMBER;
            break;
        default:
            n = 0;
    }
    for (int i = 0; i < n; i++)
        seats.push_back(false);
}

bool Carriage::getSeatStatus(int index) {
    if (index > seats.size()) {
        cout << "Номер места больше количества мест в вагоне!" << endl;
        return false;
    }
    return seats[index];
}

int Carriage::getSeatsNumber() {
    return seats.size();
}

Category CarriageTags::getCategory() {
    return category;
}