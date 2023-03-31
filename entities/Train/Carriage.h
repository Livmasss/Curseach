#ifndef CURSEACH_CARRIAGE_H
#define CURSEACH_CARRIAGE_H

#pragma once

#include<vector>

using namespace std;

enum Category {
    plats,
    coupe,
    firstClass
};

struct CarriageTags {
private:
    Category category;
    bool hasConditioner;
    bool isReturnable;

public:
    CarriageTags(Category category_, bool returnable = false, bool conditioner = false);

    Category getCategory();
};

class Carriage {
private:
    vector<bool> seats;
    CarriageTags tags;
public:
    static int const PLATS_SEAT_NUMBER = 54;
    static int const COUPE_SEAT_NUMBER = 32;
    static int const FC_SEAT_NUMBER = 10;

    Carriage(CarriageTags tags);

    bool getSeatStatus(int index);
    int getSeatsNumber();
};




#endif //CURSEACH_CARRIAGE_H