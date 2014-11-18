#include "Position.h"

void robot::Position::setx(int x) {
	this->x = x;
}

void robot::Position::sety(int y) {
	this->y = y;
}

int robot::Position::getx() {
	return this->x;
}

int robot::Position::gety() {
	return this->y;
}
