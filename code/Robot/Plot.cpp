#include "Plot.h"

int projet_robot::modele::robot::Plot::getHauteur() {
	return this->hauteur;
}

projet_robot::modele::robot::Objet projet_robot::modele::robot::Plot::getObjet() {
	return this->objet;
}

string projet_robot::modele::robot::Plot::afficher() {
	string s;
	s+="Hauteur du plot :"+getHauteur();
	return s;
}
