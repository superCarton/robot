#include "EtatEnCharge.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatEnCharge();

void projet_robot::modele::etats::EtatEnCharge::avancer() {
	// TODO - implement EtatEnCharge::avancer
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatEnCharge::peser() {
	// TODO - implement EtatEnCharge::peser
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatEnCharge::rencontrerPlot() {
	// TODO - implement EtatEnCharge::rencontrerPlot
	throw "Not yet implemented";
}

string projet_robot::modele::etats::EtatEnCharge::afficher() {
	string s="";
	s += "Etat en charge\n";
	s += "Poids de l'objet : " + projet_robot::modele::robot::Robot::getSingleton().getObjet().afficher() + "\n";
	return s;
}
