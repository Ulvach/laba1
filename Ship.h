//
// Created by Сергей Баталев on 08/10/2018.
//

#ifndef OL_23_SHIP_H
#define OL_23_SHIP_H

#include <iostream>

using namespace std;

class Ship {
public:
    int length;
    int peoples;
    int speed;

    Ship(int length, int peoples, int speed);
    virtual void write(ostream &fo) = 0;
    virtual void print() = 0;

};


#endif //OL_23_SHIP_H
