//
// Created by Сергей Баталев on 08/10/2018.
//

#ifndef OL_23_BOAT_H
#define OL_23_BOAT_H

#include <iostream>

using namespace std;

#include "Ship.h"

class Boat : public Ship {
    string to;
    string material;
    string gohar; // ходовые качества what???
public:
    void write(ostream &fo) override;

    Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar);

    void print() override;
};


#endif //OL_23_BOAT_H
