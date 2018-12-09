#include "Ship.h"

Ship::Ship(int length, int peoples, int speed) : length(length), peoples(peoples), speed(speed) {}

int Ship::getLength() const {
    return length;
}

void Ship::setLength(int length) {
    Ship::length = length;
}

int Ship::getPeoples() const {
    return peoples;
}

void Ship::setPeoples(int peoples) {
    Ship::peoples = peoples;
}

int Ship::getSpeed() const {
    return speed;
}

void Ship::setSpeed(int speed) {
    Ship::speed = speed;
}
