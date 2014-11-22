#include "EtatRobot.h"
#include "ExceptionRobot.h"
#include "EtatAVide.h"


EtatRobot* EtatRobot::premierEtat = EtatAVide::getSingleton();

EtatRobot* EtatRobot::avancer() {
	throw ExceptionRobot::Avancer_Exception();
}

EtatRobot* EtatRobot::tourner() {
	throw ExceptionRobot::Tourner_Exception();
}

EtatRobot* EtatRobot::saisir() {
	throw ExceptionRobot::Saisir_Exception();
}

EtatRobot* EtatRobot::poser() {
	throw ExceptionRobot::Poser_Exception();
}

EtatRobot* EtatRobot::peser() {
	throw ExceptionRobot::Peser_Exception();
}

EtatRobot* EtatRobot::rencontrerPlot() {
	throw ExceptionRobot::RencontrerPlot_Exception();
}

EtatRobot* EtatRobot::evaluerPlot() {
	throw ExceptionRobot::EvaluerPlot_Exception();
}

EtatRobot* EtatRobot::figer() {
	throw ExceptionRobot::Figer_Exception();
}

EtatRobot* EtatRobot::repartir() {
	throw ExceptionRobot::Repartir_Exception();
}

EtatRobot* EtatRobot::getIni() {
	return premierEtat;
}

ostream& operator<<(ostream& o, const EtatRobot& e) {
	return o << "Ne doit pas être appelé"<< endl;
}
