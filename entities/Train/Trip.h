#ifndef CURSEACH_TRIP_H
#define CURSEACH_TRIP_H


#include "Train.h"
#include <string>

using namespace std;
struct Moment {
public:
    unsigned short minute;
    unsigned short hour;
    unsigned short day;
    unsigned short month;
    unsigned short year;

    Moment(
            unsigned short minute = 0,
            unsigned short hour = 0,
            unsigned short day = 0,
            unsigned short month = 0,
            unsigned short year = 0
            );
};


struct PointOfTrip {
private:
    string cityName;
    Moment arriveMoment;
    Moment departureMoment;
public:
    PointOfTrip(const string& city, Moment &arriveMoment, Moment &departureMoment);
    Moment getArrive();
    Moment getDeparture();
};

enum Status {
    notStarted,
    boarding,
    onWay,
    ended
};


class Trip {
private:
    Train *train;
    vector<PointOfTrip> pots;
    Moment startMoment;
    Moment endMoment;
    Status status;
public:
    Trip(Train *train_ = new Train(), vector<PointOfTrip> points = vector<PointOfTrip>());
    Train *getTrain();
};


#endif //CURSEACH_TRIP_H
