#ifndef CURSEACH_ADMIN_H
#define CURSEACH_ADMIN_H

#include "Loginable.h"


class Admin : Loginable {
    bool newTrip();
    bool cancelTrip();
};


#endif //CURSEACH_ADMIN_H
