
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
    Boat(int length, int peoples, int speed);

public:
    const string &getTo() const;

    void setTo(const string &to);

    const string &getMaterial() const;

    void setMaterial(const string &material);

    const string &getGohar() const;

    void setGohar(const string &gohar);

public:
    void write(ostream &fo) override;

    Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar);

    void print() override;
};


#endif //OL_23_BOAT_H
