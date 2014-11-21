#include "Afficheur.h"
#include "Robot.h"

void Afficheur::update(Robot* r) {
	this->obs=r;
	cout << "update" << endl;
	afficher();
}

void Afficheur::afficher() {
	if (obs == NULL){
		cout << "Aucun robot à afficher" << endl;
	} else {
		cout << "afficher afficheur" << endl;
		cout << (obs->afficher()) << endl;
	}
}

void Afficheur::setObservable(Robot* r) {
	this->obs=r;
}

