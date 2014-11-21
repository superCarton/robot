#include "Position.h"

void Position::setx(int x) {
	this->x = x;
}

void Position::sety(int y) {
	this->y = y;
}

int Position::getx() {
	return this->x;
}

int Position::gety() {
	return this->y;
}

std::ostream& operator<<(std::ostream& os, const Position& p){
    return os << "[" << p.x << ", " << p.y << "]" << endl;
}
