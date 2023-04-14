#ifndef CURSEACH_LIFECIRCLE_H
#define CURSEACH_LIFECIRCLE_H
#include <iostream>

#include "Train/Trip.h"
#include "CommandHandler.h"
#include "Account/Loginable.h"
#include "Account/User.h"
#include "Account/Admin.h"

using namespace std;
class LifeCircle {
public:
    bool run = true;
    User *user = nullptr;
    CommandHandler *handler;

    LifeCircle();
    void onInit();
    void mainLoop();
    void onUpdate();
};

#endif //CURSEACH_LIFECIRCLE_H
