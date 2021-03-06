#ifndef OL_23_SUBMARINE_H
#define OL_23_SUBMARINE_H


#include "Ship.h"

class Submarine : public Ship {
public:
    int width;
    int underwaterTime;
    string armour;

    void write(ostream &fo) override;

    Submarine(int length, int peoples, int speed, int width, int underwaterTime, string &armour);

    Submarine(int length, int peoples, int speed);

    void print() override;
};


#endif //OL_23_SUBMARINE_H
