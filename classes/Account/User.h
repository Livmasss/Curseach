#ifndef CURSEACH_USER_H
#define CURSEACH_USER_H

#import "Loginable.h"
#include "../Train/Ticket.h"


struct Passport {
    int series;
    int number;
    string name;
    string lastName;
    string patronymic;
};


class User : Loginable {
    Passport passport;
    list<Ticket> ticks;
    bool rent();
    bool cancelRent();
};


#endif //CURSEACH_USER_H
