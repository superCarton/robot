#include "EtatEnChargeFaceAPlot.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatEnChargeFaceAPlot();

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::tourner() {
	// TODO - implement EtatEnChargeFaceAPlot::tourner
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::poser() {
	// TODO - implement EtatEnChargeFaceAPlot::poser
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::peser() {
	// TODO - implement EtatEnChargeFaceAPlot::peser
	throw "Not yet implemented";
}

string projet_robot::modele::etats::EtatEnChargeFaceAPlot::afficher() {
	string s;
	s += "Etat en charge face à plot\n";
	s += projet_robot::modele::robot::Robot::getSingleton().getPlot().afficher() + "\n";
	s+= projet_robot::modele::robot::Robot::getSingleton().getObjet().afficher() + "\n";
	return s;
}

