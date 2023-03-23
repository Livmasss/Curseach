#ifndef CURSEACH_TRIP_H
#define CURSEACH_TRIP_H


#include "Train.h"
#include <list>
#include <string>

struct Moment {
    string Time;
    string Data;
};


struct PointOfTrip {
    string cityName;
    Moment arriveMoment;
    Moment departureMoment;
};


class Trip {
    Train *train;
    list <PointOfTrip> pots;
    Moment startMoment;
    Moment endMoment;
    byte status;
};


#endif //CURSEACH_TRIP_H
