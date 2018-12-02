#include "Sailboat.h"

Sailboat::Sailboat(int length, int peoples, int speed, const string &type) : Ship(length, peoples, speed), type(type) {}

void Sailboat::write(ostream &fo) {
    fo << "sailboat" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << endl;
    fo << this->type << endl;
}

void Sailboat::print() {
    cout << "type: "<< "sailboat" <<" len: " << this->length << " speed: " << this->speed << " people: "<< this->peoples;
    cout << " type: " << this->type << endl;
}
