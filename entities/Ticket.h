#ifndef CURSEACH_TICKET_H
#define CURSEACH_TICKET_H

#pragma once

#include "Train/Trip.h"
#include "Train/Carriage.h"

class Ticket {
private:
    Trip *trip;
    Carriage *car;
    int seatNumber;
    PointOfTrip *start;
    PointOfTrip *end;
public:
    Ticket(Trip* trip, Carriage *carriage, int seatNumber, PointOfTrip *start, PointOfTrip *end);
    bool returnTicket();

};


#endif //CURSEACH_TICKET_H
