#include "Robot.h";
#include "EtatAVidefaceAPlot.h";

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatAVidefaceAPlot();

void projet_robot::modele::etats::EtatAVidefaceAPlot::tourner() {
	// TODO - implement EtatAVidefaceAPlot::tourner
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatAVidefaceAPlot::saisir() {
	// TODO - implement EtatAVidefaceAPlot::saisir
	throw "Not yet implemented";
}

void projet_robot::modele::etats::EtatAVidefaceAPlot::evaluerPlot() {
	// TODO - implement EtatAVidefaceAPlot::evaluerPlot
	throw "Not yet implemented";
}

string projet_robot::modele::etats::EtatAVidefaceAPlot::afficher() {
	string s="";
	s += "Etat a vide face a plot\n";
	s += "Hauteur du plot : " + 	projet_robot::modele::robot::Robot::getSingleton().getPlot().afficher() + "\n";
	return s;
}
