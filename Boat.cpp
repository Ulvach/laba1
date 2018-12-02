#include "Boat.h"

void Boat::write(ostream &fo) {
    fo << "boat" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << endl;
    fo << this->to << endl << this->material << endl << this->gohar << endl;
}

Boat::Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar) : Ship(
        length, peoples, speed), to(to), material(material), gohar(gohar) {}

void Boat::print() {
    cout << "type: "<< "boat" <<" len: " << this->length << " speed: " << this->speed << " people: "<< this->peoples;
    cout << " to: " << this->to << " material: " << this->material << " gohar: " << this->gohar << endl;
}

