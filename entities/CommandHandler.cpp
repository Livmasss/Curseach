#include "CommandHandler.h"
#include "Account/Loginable.h"
#include "Account/User.h"
#include "LifeCircle.h"

#include <iostream>

using namespace std;
void CommandHandler::logIn() {
    string name, password;
    cout << "Enter user name: " << endl;
    cin >> name;
    cout << "Enter user name: " << endl;
    cin >> password;
    User::logIn(name, password);
}
void CommandHandler::registerUser() {
    string name, password;
    cout << "Enter user name: " << endl;
    cin >> name;
    cout << "Enter user name: " << endl;
    cin >> password;
    User::reg(name, password);
}

string CommandHandler::readCommand() {
    string comm;
    cin >> comm;
    return comm;
}

CommandHandler::CommandHandler(LifeCircle *circle) {
    this->circle = circle;
}

void CommandHandler::handleCommand() {
    Command command = commandTranslator.at(readCommand());

    switch (command) {
        case close:
            circle->run = false;
            break;
        case login:
            logIn();
            break;
        case reg:
            registerUser();
            break;
        case logout:

            break;
        case del:
            break;
    }

}

void CommandHandler::logOut() {
     circle->user = nullptr;
}
