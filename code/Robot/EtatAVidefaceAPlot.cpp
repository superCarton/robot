#include "Robot.h";
#include "EtatAVidefaceAPlot.h";

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatAVidefaceAPlot();

void projet_robot::modele::etats::EtatAVidefaceAPlot::tourner() {
	projet_robot::modele::robot::Robot::getSingleton()::setEtat(EtatAVide::getSingleton());
}

void projet_robot::modele::etats::EtatAVidefaceAPlot::saisir() {
	projet_robot::modele::robot::Robot::getSingleton()::setEtat(EtatEnChargeFaceAPlot::getSingleton());
}

void projet_robot::modele::etats::EtatAVidefaceAPlot::evaluerPlot() {
}

string projet_robot::modele::etats::EtatAVidefaceAPlot::afficher() {
	string s="";
	s += "Etat a vide face a plot\n";
	s += "Hauteur du plot : " + 	projet_robot::modele::robot::Robot::getSingleton().getPlot().afficher() + "\n";
	return s;
}
