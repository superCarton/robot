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
		string direct = (obs->getDirection() =='N') ? "Nord" : ((obs->getDirection() =='E') ? "Est" : ((obs->getDirection() =='S') ? "Sud" : "Ouest"));
		cout << "/**** Information Robot ****/" << endl;
		cout << "\tETAT COURANT : " << obs -> getEtat() -> getNomEtat() << endl;
		cout << "\t\t" << (*(obs -> getPosition()));
		cout << "\t\tDIRECTION :  " <<  direct << endl;
		cout << "\t\t" << (*(obs -> getObjet()));
		cout << "\t\t" << (*(obs -> getPlot()));
		cout << "\n***************************************************\n" << endl << endl;
	}
}

void Afficheur::setObservable(Robot* r) {
	this->obs=r;
}

