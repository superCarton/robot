#include "Plot.h"

int Plot::getHauteur() {
	return this->hauteur;
}

string Plot::afficher() {
	string s;
	s+="Hauteur du plot :"+getHauteur();
	return s;
}
