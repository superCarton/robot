#include "EtatEnCharge.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatEnCharge();

void projet_robot::modele::etats::EtatEnCharge::avancer() {
	;
}

void projet_robot::modele::etats::EtatEnCharge::peser() {
	;
}

void projet_robot::modele::etats::EtatEnCharge::rencontrerPlot() {
	projet_robot::modele::robot::Robot::getSingleton().setEtat(EtatEnChargeFaceAPlot::getSingleton());
}

string projet_robot::modele::etats::EtatEnCharge::afficher() {
	string s="";
	s += "Etat en charge\n";
	s += "Poids de l'objet : " + projet_robot::modele::robot::Robot::getSingleton().getObjet().afficher() + "\n";
	return s;
}
