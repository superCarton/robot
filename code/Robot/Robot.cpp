#include "Robot.h"
#include "ExceptionRobot.h"

void Robot::avancer(int n) {
	try {
		etat -> avancer();
		if(n < 0) {
			throw ExceptionRobot::Marche_Arriere_Interdite();
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
					throw ExceptionRobot::Direction_Inconnue();
					break;
				}

			}
			notify();
		}
	} catch (ExceptionRobot::Avancer_Exception& e) {
		//Ce déplacement est impossible dans cette état
		cout << "exception avancer" << endl;
	}


}

void Robot::tourner(char dir) {
	try {
		cout << "tourner robot" << endl;
		etat = etat ->tourner();
		direction = dir;
		notify();
	} catch (ExceptionRobot::Tourner_Exception& e) {
		cout << "tourner exception" << endl;
		//Cette action est impossible dans cette état
	}
}

void Robot::saisir(Objet o) {
	try {
		etat = etat -> saisir();
		objet = o;
		notify();
	} catch (ExceptionRobot::Saisir_Exception& e) {
		//Cette action est impossible dans cette état
	}
}


void Robot::poser() {
	try {
		etat = etat -> poser();
		objet = Objet(0);
		notify();
	} catch (ExceptionRobot::Poser_Exception& e) {
		//Cette action est impossible dans cette état
	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
			etat = etat -> rencontrerPlot();
			plot = p;
			notify();
		} catch (ExceptionRobot::RencontrerPlot_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

int Robot::peser() {
	try {
			etat = etat -> peser();
			return objet.getPoids();
		} catch (ExceptionRobot::Peser_Exception& e) {
			//Cette action est impossible dans cette état
			return -1;
		}
}

int Robot::evaluerPlot() {
	try {
			etat = etat -> peser();
			return plot.getHauteur();
		} catch (ExceptionRobot::EvaluerPlot_Exception& e) {
			//Cette action est impossible dans cette état
			return -1;
		}
}

void Robot::figer() {
	try {
			etat = etat -> figer();
			notify();
		} catch (ExceptionRobot::Figer_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

void Robot::repartir() {
	try {
			etat = etat -> repartir();
			notify();
		} catch (ExceptionRobot::Repartir_Exception& e) {
			//Cette action est impossible dans cette état
		}
}

string Robot::afficher() {
	cout << "afficher robot" << endl;
	string s;
	s+= position.afficher();//+"\n"+etat -> afficher();
	return s;
}

void Robot::notify() {
	cout << "notify" << endl;
	afficheur.update(this);
}

Position Robot::getPosition() {
	return position;
}

Plot Robot::getPlot() {
	return plot;
}

Objet Robot::getObjet() {
	return objet;
}

void Robot::setObserveur(Afficheur a) {
	afficheur = a;
}
