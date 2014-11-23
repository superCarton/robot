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
					int act = position.gety();
					position.sety(act+n);
					break;
				}
				case 'S' : {
					int act = position.gety();
					position.sety(act-n);
					break;
				}
				case 'E' : {
					int act = position.getx();
					position.setx(act+n);
					break;
				}
				case 'O' : {
					int act = position.getx();
					position.setx(act-n);
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
		//Ce déplacement est impossible dans cet état
		cerr << " Impossible d'avancer dans cet état" << endl;
	}


}

void Robot::tourner(char dir) {
	try {
		etat = etat ->tourner();
		direction = dir;
		plot = Plot(0);
		notify();
	} catch (ExceptionRobot::Tourner_Exception& e) {
		cerr << "Impossible de tourner dans cet état" << endl;
		//Cette action est impossible dans cet état
	}
}

void Robot::saisir(Objet o) {
	try {
		etat = etat -> saisir();
		objet = o;
		notify();
	} catch (ExceptionRobot::Saisir_Exception& e) {
		cerr << "Impossible de saisir dans cet état" << endl;
		//Cette action est impossible dans cet état
	}
}


void Robot::poser() {
	try {
		etat = etat -> poser();
		objet = Objet(0);
		notify();
	} catch (ExceptionRobot::Poser_Exception& e) {
		cerr << "Impossible de poser dans cet état" << endl;
		//Cette action est impossible dans cet état
	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
			etat = etat -> rencontrerPlot();
			plot = p;
			notify();
		} catch (ExceptionRobot::RencontrerPlot_Exception& e) {
			cerr << "Impossible de rencontrer un plot dans cet état" << endl;
			//Cette action est impossible dans cet état
		}
}

int Robot::peser() {
	try {
			etat = etat -> peser();
			return objet.getPoids();
		} catch (ExceptionRobot::Peser_Exception& e) {
			cerr << "Impossible de peser dans cet état" << endl;
			//Cette action est impossible dans cet état
			return -1;
		}
}

int Robot::evaluerPlot() {
	try {
			etat = etat -> evaluerPlot();
			return plot.getHauteur();
		} catch (ExceptionRobot::EvaluerPlot_Exception& e) {
			cerr << "Impossible d'évaluer un plot dans cet état" << endl;
			//Cette action est impossible dans cet état
			return -1;
		}
}

void Robot::figer() {
	try {
			etat = etat -> figer();
			notify();
		} catch (ExceptionRobot::Figer_Exception& e) {
			cerr << "Impossible de se figer dans cet état" << endl;
			//Cette action est impossible dans cet état
		}
}

void Robot::repartir() {
	try {
			etat = etat -> repartir();
			notify();
		} catch (ExceptionRobot::Repartir_Exception& e) {
			cerr << "Impossible de repartir dans cet état" << endl;
			//Cette action est impossible dans cet état
		}
}

void Robot::notify() {
	for (Afficheur* a : afficheurs){
		a->update(this);
	}
}

void Robot::addObserveur(Afficheur* a) {
	for (int i=0; i<MAX_OBSERVERS; i++){
		if (afficheurs[i]==0){
			afficheurs[i] = a;
			return;
		}
	}
}
