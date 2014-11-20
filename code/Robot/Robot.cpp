#include "Robot.h"
using namespace std;
projet_robot::modele::robot::Robot& projet_robot::modele::robot::Robot::_instance_robot = Robot();


void projet_robot::modele::robot::Robot::avancer(int n) {
	try {
		etat.avancer();
		if(n < 0) {
			throw Marche_Arriere_Interdite();
		}
		else {
			switch(direction) {
				case 'N' : {
					position.sety(n);
					break;
				}
				case 'S' : {
					position.sety(-n);
					break;
				}
				case 'E' : {
					position.setx(n);
					break;
				}
				case 'O' : {
					position.setx(-n);
					break;
				}
				default : {
					throw Direction_Inconnue();
					break;
				}

			}
		}
	} catch (Avancer_Exception& e) {
		//Ce déplacement est impossible dans cette état
	}


}

void projet_robot::modele::robot::Robot::tourner(char dir) {
	try {
		etat.tourner();
		direction = dir;
	} catch (Tourner_Exception& e) {
		//Cette action est impossible dans cette état
	}
}

void projet_robot::modele::robot::Robot::saisir(projet_robot::modele::robot::Objet o) {
	try {
		etat.saisir();
		objet = o;
	} catch (Saisir_Exception& e) {
		//Cette action est impossible dans cette état
	}
}
}

void projet_robot::modele::robot::Robot::poser() {
	// TODO - implement Robot::poser
	throw "Not yet implemented";
}

void projet_robot::modele::robot::Robot::rencontrerPlot(Plot p) {
	// TODO - implement Robot::rencontrerPlot
	throw "Not yet implemented";
}

int projet_robot::modele::robot::Robot::peser() {
	// TODO - implement Robot::peser
	throw "Not yet implemented";
}

int projet_robot::modele::robot::Robot::evaluerPlot() {
	// TODO - implement Robot::evaluerPlot
	throw "Not yet implemented";
}

void projet_robot::modele::robot::Robot::figer() {
	// TODO - implement Robot::figer
	throw "Not yet implemented";
}

void projet_robot::modele::robot::Robot::repartir() {
	// TODO - implement Robot::repartir
	throw "Not yet implemented";
}

void projet_robot::modele::robot::Robot::afficher() {
	// TODO - implement Robot::afficher
	throw "Not yet implemented";
}

void projet_robot::modele::robot::Robot::setEtat(projet_robot::modele::etats::EtatRobot etat) {
	// TODO - implement Robot::setEtat
	throw "Not yet implemented";
}

projet_robot::modele::robot::Robot& projet_robot::modele::robot::Robot::getSingleton() {

	return _instance_robot;
}

void projet_robot::modele::robot::Robot::notify() {
	// TODO - implement Robot::notify
	throw "Not yet implemented";
}

EtatRobot projet_robot::modele::robot::Robot::getEtat() {
	return etat;
}

Position projet_robot::modele::robot::Robot::getPosition() {
	return position;
}

Plot projet_robot::modele::robot::Robot::getPlot() {
	return plot;
}

Objet projet_robot::modele::robot::Robot::getObjet() {
	return objet;
}
