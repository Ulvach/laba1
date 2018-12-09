
#ifndef OL_23_SAILBOAT_H
#define OL_23_SAILBOAT_H

#include <iostream>
#include "Ship.h"

using namespace std;

class Sailboat : public Ship {
    string type;
    string name;
    string military;
public:
    Sailboat(int length, int peoples, int speed, const string &type, string &name, string &military);

    Sailboat(int length, int peoples, int speed);

    const string &getType() const;

    void setType(const string &type);

    const string &getName() const;

    void setName(const string &name);

    const string &getMilitary() const;

    void setMilitary(const string &military);

    void print() override;

    void write(ostream &fo) override;
};


#endif //OL_23_SAILBOAT_H
