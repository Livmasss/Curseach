#ifndef CURSEACH_TICKET_H
#define CURSEACH_TICKET_H

#pragma once

#include "Trip.h"
#include "Carriage.h"

class Ticket {
    Trip *trip;
    Carriage *car;
    int seatNumber;
    TrainTags *tTags;
    CarriageTags *sTags;
    PointOfTrip start;
    PointOfTrip end;
};


#endif //CURSEACH_TICKET_H
