#include "EtatAVide.h"
#include "EtatAVidefaceAPlot.h"

EtatAVide* EtatAVide::instance = new EtatAVide;

EtatRobot* EtatAVide::tourner() {
	return this;
}

EtatRobot* EtatAVide::avancer() {
	return this;
}

EtatRobot* EtatAVide::rencontrerPlot() {
	return EtatAVidefaceAPlot::getSingleton();
}

EtatAVide* EtatAVide::getSingleton() {
	return instance;
}
