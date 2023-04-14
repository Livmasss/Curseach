#include "Ticket.h"
#include <string>

using namespace std;

Ticket::Ticket(Trip *trip, Carriage *carriage, int seatNumber, PointOfTrip *start, PointOfTrip *end) {
    this->trip = trip;
    this->car = carriage;
    this->seatNumber = seatNumber;
    this->start = start;
    this->end = end;
}