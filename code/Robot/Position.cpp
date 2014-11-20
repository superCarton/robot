#include "Position.h"

void projet_robot::modele::robot::Position::setx(int x) {
	this->x = x;
}

void projet_robot::modele::robot::Position::sety(int y) {
	this->y = y;
}

int projet_robot::modele::robot::Position::getx() {
	return this->x;
}

int projet_robot::modele::robot::Position::gety() {
	return this->y;
}
