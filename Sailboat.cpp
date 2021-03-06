#include "Sailboat.h"
#include <string.h>

using namespace std;

Sailboat::Sailboat(int length, int peoples, int speed, const string &type, string &name, string &military) : Ship(length, peoples, speed), type(type), name(name), military(military) {}

void Sailboat::write(ostream &fo) {
    fo << "sailboat" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << " " << this->military << " " << this->name << endl;
    fo << this->type << endl;
}

void Sailboat::print() {
    cout << "Тип: "<< "Парусник" <<" Длина: " << this->length << " Скорость: " << this->speed << " Экипаж: "<< this->peoples;
    cout << " Тип: " << this->type << " " << this->military << " Название: " << this->name << endl;
}

const string &Sailboat::getType() const {
    return type;
}

Sailboat::Sailboat(int length, int peoples, int speed) : Ship(length, peoples, speed) {}

void Sailboat::setType(const string &type) {
    Sailboat::type = type;
}

const string &Sailboat::getName() const {
    return name;
}

void Sailboat::setName(const string &name) {
    Sailboat::name = name;
}

const string &Sailboat::getMilitary() const {
    return military;
}

void Sailboat::setMilitary(const string &military) {
    Sailboat::military = military;
}
