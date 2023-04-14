#ifndef CURSEACH_LOGINABLE_H
#define CURSEACH_LOGINABLE_H

#include <string>

using namespace std;
class Loginable {
    string login;
    string password;
    void logOut();
    void del();
};



#endif //CURSEACH_LOGINABLE_H
