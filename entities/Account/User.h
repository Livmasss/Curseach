#ifndef CURSEACH_USER_H
#define CURSEACH_USER_H

#include <vector>
#include "Loginable.h"
#include "../Ticket.h"
#include "../LifeCircle.h"


using namespace std;
struct Passport {
    int series;
    int number;
    string name;
    string lastName;
    string patronymic;
};


class User : Loginable {
private:
    Passport passport;
    vector<Ticket> ticks;
public:
    bool rent();
    bool cancelRent();
    static User logIn(string username, string password, LifeCircle circle);
    static User reg(string username, string password, LifeCircle circle);
};


#endif //CURSEACH_USER_H
