#include "Submarine.h"

Submarine::Submarine(int length, int peoples, int speed, int width) : Ship(length, peoples, speed), width(width) {}

void Submarine::write(ostream &fo) {
    fo << "submarine" << endl;
    fo << this->length << " " << this->speed << " "<< this->peoples << endl;
    fo << this->width << endl;
}

void Submarine::print() {
    cout << "type: "<< "submarine" <<" len: " << this->length << " speed: " << this->speed << " people: "<< this->peoples;
    cout << " width: " << this->width << endl;
}
