#ifndef CURSEACH_USER_H
#define CURSEACH_USER_H

#include <vector>
#include "Loginable.h"
#include "../Train/Ticket.h"


using namespace std;
struct Passport {
    int series;
    int number;
    string name;
    string lastName;
    string patronymic;
};


class User : Loginable {
    Passport passport;
    vector<Ticket> ticks;
    bool rent();
    bool cancelRent();
};


#endif //CURSEACH_USER_H
