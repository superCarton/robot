#include "Objet.h"

int Objet::getPoids() {
	return this->poids;
}

string Objet::afficher() {
	string s;
	s+="Poids de l'objet :"+getPoids();
	return s;
}
