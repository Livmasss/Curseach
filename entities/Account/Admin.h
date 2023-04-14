#ifndef CURSEACH_ADMIN_H
#define CURSEACH_ADMIN_H

#include "Loginable.h"


class Admin : Loginable {
    bool newTrip();
    bool cancelTrip();
    static Admin logIn();
    static Admin reg();
};


#endif //CURSEACH_ADMIN_H
