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

string Position::afficher() {
	string s;
	s+="position : ["+ getx();
	s+=", "+ gety();
	s+="]";
	return s;
}
