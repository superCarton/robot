#include "EtatAVide.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatAVide();

void projet_robot::modele::etats::EtatAVide::avancer() {
	// TODO - implement EtatAVide::avancer
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatAVide::rencontrerPlot() {
	// TODO - implement EtatAVide::rencontrerPlot
	throw "Not yet implemented";
}

string projet_robot::modele::etats::EtatAVide::afficher() {
	return "Etat a vide\n";
}
