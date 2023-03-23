#ifndef CURSEACH_TICKET_H
#define CURSEACH_TICKET_H


#include "Trip.h"

class Ticket {
    Trip *trip;
    Carriage *car;
    int seatNumber;
    TrainTags *ttags;
    CarriageTags *stags;
};


#endif //CURSEACH_TICKET_H
