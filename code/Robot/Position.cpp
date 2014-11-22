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

ostream& operator<<(ostream& os, const Position& p){
    return os <<"La position actuelle du robot est : [" << p.x << ", " << p.y << "]" << endl;
}
