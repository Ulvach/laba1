#include "Boat.h"

void Boat::write(ostream &fo) {
    fo << "boat" << endl;
    fo << this->length << " " << this->speed << " " << this->peoples << endl;
    fo << this->to << endl << this->material << endl << this->gohar << endl;
}

Boat::Boat(int length, int peoples, int speed, const string &to, const string &material, const string &gohar) : Ship(
        length, peoples, speed), to(to), material(material), gohar(gohar) {}

void Boat::print() {
    cout << "Тип: "<< "Катер" <<" Длина: " << this->length << " Скорость: " << this->speed << " экипаж: "<< this->peoples;
    cout << " Назначение: " << this->to << " материал: " << this->material << " ходовые качества: " << this->gohar << endl;
}

