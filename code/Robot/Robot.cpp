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
			notify();
		}
	} catch (Avancer_Exception& e) {
		//Ce déplacement est impossible dans cette état
	}


}

void projet_robot::modele::robot::Robot::tourner(char dir) {
	try {
		etat.tourner();
		direction = dir;
		notify();
	} catch (Tourner_Exception& e) {
		//Cette action est impossible dans cette état
	}
}

void projet_robot::modele::robot::Robot::saisir() {
	try {
		etat.saisir();
		objet = plot.getObjet();
		plot.setObjet(NULL);
		notify();
	} catch (Saisir_Exception& e) {
		//Cette action est impossible dans cette état
	}
}


void projet_robot::modele::robot::Robot::poser() {
	try {
		etat.poser();
		plot.setObjet(objet);
		objet = NULL;
		notify();
	} catch (Poser_Exception& e) {
		//Cette action est impossible dans cette état
	}
}

void projet_robot::modele::robot::Robot::rencontrerPlot(Plot p) {
	try {
			etat.rencontrerPlot();
			plot = p;
			notify();
		} catch (RencontrerPlot_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

int projet_robot::modele::robot::Robot::peser() {
	try {
			etat.peser();
			return objet.getPoids();
		} catch (Peser_Exception& e) {
			//Cette action est impossible dans cette état
			return -1;
		}
}

int projet_robot::modele::robot::Robot::evaluerPlot() {
	try {
			etat.peser();
			return plot.getHauteur();
		} catch (EvaluerPlot_Exception& e) {
			//Cette action est impossible dans cette état
			return -1;
		}
}

void projet_robot::modele::robot::Robot::figer() {
	try {
			etat.figer();
			notify();
		} catch (Figer_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

void projet_robot::modele::robot::Robot::repartir() {
	try {
			etat.repartir();
			notify();
		} catch (Repartir_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

string projet_robot::modele::robot::Robot::afficher() {
	string s;
	s+= position.afficher()+"\n"+etat.afficher();
	return s;
}

void projet_robot::modele::robot::Robot::setEtat(projet_robot::modele::etats::EtatRobot etat) {
	this -> etat = etat;
}

projet_robot::modele::robot::Robot& projet_robot::modele::robot::Robot::getSingleton() {
	return _instance_robot;
}

void projet_robot::modele::robot::Robot::notify() {
	afficheur.update(*this);
}

projet_robot::modele::etats::EtatRobot projet_robot::modele::robot::Robot::getEtat() {
	return etat;
}

projet_robot::modele::robot::Position projet_robot::modele::robot::Robot::getPosition() {
	return position;
}

projet_robot::modele::robot::Plot projet_robot::modele::robot::Robot::getPlot() {
	return plot;
}

projet_robot::modele::robot::Objet projet_robot::modele::robot::Robot::getObjet() {
	return objet;
}

void projet_robot::modele::robot::Robot::setObserveur(vue::Afficheur a) {
	afficheur = a;
}
