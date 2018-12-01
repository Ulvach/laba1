//
// Created by Сергей Баталев on 08/10/2018.
//

#ifndef OL_23_SUBMARINE_H
#define OL_23_SUBMARINE_H


#include "Ship.h"

class Submarine : public Ship {
public:
    int width;

    void write(ostream &fo) override;

    Submarine(int length, int peoples, int speed, int width);

    void print() override;
};


#endif //OL_23_SUBMARINE_H
