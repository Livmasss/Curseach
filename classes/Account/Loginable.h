#ifndef CURSEACH_LOGINABLE_H
#define CURSEACH_LOGINABLE_H

#include <string>

using namespace std;
class Loginable {
    string login;
    string password;
    bool logIn();
    bool logOut();
    bool reg();
    bool del();
};



#endif //CURSEACH_LOGINABLE_H
