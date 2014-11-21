#include "EtatAVide.h"
#include "EtatAVidefaceAPlot.h"

EtatAVide* EtatAVide::instance = new EtatAVide;


EtatRobot* EtatAVide::avancer() { return this;}

EtatRobot* EtatAVide::rencontrerPlot() {
	return EtatAVidefaceAPlot::getSingleton();
}

string EtatAVide::afficher() {
	return "Etat a vide\n";
}

EtatAVide* EtatAVide::getSingleton() {
	return instance;
}
