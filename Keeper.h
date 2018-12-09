#ifndef OL_23_KEEPER_H
#define OL_23_KEEPER_H


#include "Ship.h"

class Keeper {
private:
    Ship **data;
    int size;
public:
    Ship **getData() const;
    int getSize() const;
    Keeper &add(Ship &ship);
    Keeper &remove(int index);
    Keeper &print();

    Keeper();
    ~Keeper();

    void write(string filename);
};


#endif //OL_23_KEEPER_H
