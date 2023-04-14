#ifndef CURSEACH_COMMANDHANDLER_H
#define CURSEACH_COMMANDHANDLER_H

#include <string>
#include <map>
#include "LifeCircle.h"


using namespace std;
enum Command {
    close,
    reg,
    login,
    logout,
    del
};

class CommandHandler {
private:
    void handleCommand();
    LifeCircle *circle;
public:
    CommandHandler(LifeCircle *circle);
    string readCommand();
    const map<string, Command> commandTranslator = {{"close", close},
                                                    {"reg", reg},
                                                    {"login", login},
                                                    {"logout", logout},
                                                    {"del", del}};

    void logIn();

    void registerUser();

    void logOut();

    void deleteAccount();
};


#endif //CURSEACH_COMMANDHANDLER_H
