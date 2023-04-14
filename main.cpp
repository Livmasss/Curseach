#include <iostream>
#include "pqxx/pqxx"

#include "entities/LifeCircle.h"
using namespace pqxx;
using namespace std;
int main() {

    LifeCircle circle = LifeCircle();

    circle.mainLoop();
}

void LifeCircle::onInit() {
    // Generating carriages vector
    vector<Carriage *> cars = vector<Carriage *>();
    for (int i = 0; i < 6; i++) {
        auto cTags = CarriageTags(plats);
        cars.push_back(new Carriage(cTags));
        if (i == 3) {
            for (int j = 0; j < 7; j++) {
                cTags = CarriageTags(coupe);
                cars.push_back(new Carriage(cTags));
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        auto cTags = CarriageTags(firstClass);
        cars.push_back(new Carriage(cTags));
    }

    // Creates Train
    TrainTags tTags = TrainTags();
    Train train = Train(cars, &tTags);

    // Print full train
    for (int iCar = 0; iCar < train.getLength(); iCar++) {
        Carriage *car = train.getCarriage(iCar);
        for (int iSeat = 0; iSeat < car->getSeatsNumber(); iSeat++ ) {
            if (iSeat != 0) cout << ", ";
            cout << car->getSeatStatus(iSeat);
        }
        cout << ";" << endl;
    }
}

void LifeCircle::onUpdate() {
    cout << "Type command: " << endl;
    this->handler->readCommand();
}

void connect() {
    string connectionString = "host=localhost port=5000 dbname=curseDB user=postgres password=livmas";

    try {
        connection con(connectionString.c_str());
        work worker(con);
    }
    catch(const exception &e) {
        cout << e.what() << endl;
    }
}