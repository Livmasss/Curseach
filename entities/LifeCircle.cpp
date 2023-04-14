#include "LifeCircle.h"

LifeCircle::LifeCircle() {
    handler = new CommandHandler();
    onInit();
}

void LifeCircle::mainLoop() {
    while (run) {
        onUpdate();
    }
}