#include "Trip.h"

#include <utility>

Moment::Moment(unsigned short minute, unsigned short hour, unsigned short day, unsigned short month,
               unsigned short year) {
    this->minute = minute;
    this->hour = hour;
    this->day = day;
    this->month = month;
    this->year = year;
}

PointOfTrip::PointOfTrip(const string& city, Moment &arriveMoment, Moment &departureMoment)
        : arriveMoment(arriveMoment), departureMoment(departureMoment) {
    cityName = city;
}

Moment PointOfTrip::getArrive() {
    return arriveMoment;
}

Moment PointOfTrip::getDeparture() {
    return departureMoment;
}

Trip::Trip(Train *train_, vector<PointOfTrip> points) {
    train = train_;
    pots = std::move(points);
    status = notStarted;
    if (pots.empty())
        return;
    startMoment = pots.at(0).getDeparture();
    endMoment = pots.at(pots.size() - 1).getArrive();
}

Train *Trip::getTrain() {
    return train;
}