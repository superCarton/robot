#include "Afficheur.h"
#include <iostream>

void projet_robot::vue::Afficheur::update(projet_robot::modele::robot::Robot r) {
	this->obs=r;
	afficher();
}

void projet_robot::vue::Afficheur::afficher() {
	if (obs == NULL){
		cout << "Aucun robot à afficher" << endl;
	} else {
		cout << obs.afficher() << endl;
	}
}

void projet_robot::vue::Afficheur::setObservable(projet_robot::modele::robot::Robot r) {
	this->obs=r;
}

