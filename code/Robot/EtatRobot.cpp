#include "EtatRobot.h"


void projet_robot::modele::etats::EtatRobot::avancer() {
	throw robot::Robot::Avancer_Exception();
}

void projet_robot::modele::etats::EtatRobot::tourner() {
	throw robot::Robot::Tourner_Exception();
}

void projet_robot::modele::etats::EtatRobot::saisir() {
	throw robot::Robot::Saisir_Exception();
}

void projet_robot::modele::etats::EtatRobot::poser() {
	throw robot::Robot::Poser_Exception();
}

void projet_robot::modele::etats::EtatRobot::peser() {
	throw robot::Robot::Peser_Exception();
}

void projet_robot::modele::etats::EtatRobot::rencontrerPlot() {
	throw robot::Robot::RencontrerPlot_Exception();
}

void projet_robot::modele::etats::EtatRobot::evaluerPlot() {
	throw robot::Robot::EvaluerPlot_Exception();
}

void projet_robot::modele::etats::EtatRobot::figer() {
	throw robot::Robot::Figer_Exception();
}

void projet_robot::modele::etats::EtatRobot::repartir() {
	throw robot::Robot::Repartir_Exception();
}

string projet_robot::modele::etats::EtatRobot::afficher() {
	return "Etat robot --> ne doit pas etre appelé";
}

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::getSingleton() {
	return instance;
}
