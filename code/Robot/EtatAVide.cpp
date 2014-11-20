#include "EtatAVide.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatAVide();


void projet_robot::modele::etats::EtatAVide::avancer() {}

void projet_robot::modele::etats::EtatAVide::rencontrerPlot() {
	projet_robot::modele::robot::Robot::getSingleton().setEtat(EtatAVidefaceAPlot::getSingleton());
}

string projet_robot::modele::etats::EtatAVide::afficher() {
	return "Etat a vide\n";
}
