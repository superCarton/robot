#include "Afficheur.h"
#include <iostream>

void projet_robot::vue::Afficheur::update(projet_robot::modele::robot::Robot r) {
	this->observable=r;
	afficher();
}

void projet_robot::vue::Afficheur::afficher() {
	if (observable == NULL){
		cout << "Aucun robot à afficher" << endl;
	} else {
		cout << observable.afficher() << endl;
	}
}

void projet_robot::vue::Afficheur::set_observable(projet_robot::modele::robot::Robot r) {
	this->observable=r;
}
