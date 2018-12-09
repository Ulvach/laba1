#include "Boat.h"

void Boat::write(ostream &fo) {
    fo << "boat" << endl;
    fo << " " << this->speed << " " << this->peoples << endl;
    fo << this->to << endl << this->material << endl << this->gohar << endl;
}

Boat::Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar) : Ship(
        length, peoples, speed), to(to), material(material), gohar(gohar) {}

void Boat::print() {
    cout << "Тип: "<< "Катер" << " Скорость: " << this->speed << " экипаж: "<< this->peoples;
    cout << " Назначение: " << this->to << " материал: " << this->material << " ходовые качества: " << this->gohar << endl;
}

const string &Boat::getTo() const {
    return to;
}

void Boat::setTo(const string &to) {
    Boat::to = to;
}

const string &Boat::getMaterial() const {
    return material;
}

void Boat::setMaterial(const string &material) {
    Boat::material = material;
}

const string &Boat::getGohar() const {
    return gohar;
}

void Boat::setGohar(const string &gohar) {
    Boat::gohar = gohar;
}

Boat::Boat(int length, int peoples, int speed) : Ship(length, peoples, speed) {}
