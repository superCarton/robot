#include "Afficheur.h"
#include "Robot.h"

void Afficheur::update(Robot* r) {
	this->obs=r;
	afficher();
}

void Afficheur::afficher() {
	if (obs == NULL){
		cout << "Aucun robot à afficher" << endl;
	} else {
		obs->afficher();
	}
}

void Afficheur::setObservable(Robot* r) {
	this->obs=r;
}

