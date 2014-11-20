#include "Objet.h"

int projet_robot::modele::robot::Objet::getPoids() {
	return this->poids;
}

string projet_robot::modele::robot::Objet::afficher() {
	string s;
	s+="Poids de l'objet :"+getPoids();
	return s;
}
