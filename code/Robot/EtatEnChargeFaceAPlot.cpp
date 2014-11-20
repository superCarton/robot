#include "EtatEnChargeFaceAPlot.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatEnChargeFaceAPlot();

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::tourner() {
	projet_robot::modele::robot::Robot::getSingleton().setEtat(EtatEnCharge::getSingleton());
}

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::poser() {
	projet_robot::modele::robot::Robot::getSingleton().setEtat(EtatAVidefaceAPlot::getSingleton());
}

void projet_robot::modele::etats::EtatEnChargeFaceAPlot::peser() {
	;
}

string projet_robot::modele::etats::EtatEnChargeFaceAPlot::afficher() {
	string s;
	s += "Etat en charge face à plot\n";
	s += projet_robot::modele::robot::Robot::getSingleton().getPlot().afficher() + "\n";
	s+= projet_robot::modele::robot::Robot::getSingleton().getObjet().afficher() + "\n";
	return s;
}



