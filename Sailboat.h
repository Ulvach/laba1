#ifndef OL_23_SAILBOAT_H
#define OL_23_SAILBOAT_H

#include <iostream>
#include "Ship.h"

using namespace std;

class Sailboat : public Ship {
    string type;
public:
    Sailboat(int length, int peoples, int speed, const string &type);

    void print() override;

    void write(ostream &fo) override;
};


#endif //OL_23_SAILBOAT_H
