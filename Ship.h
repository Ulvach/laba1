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

    int getLength() const;

    void setLength(int length);

    int getPeoples() const;

    void setPeoples(int peoples);

    int getSpeed() const;

    void setSpeed(int speed);
};


#endif //OL_23_SHIP_H
