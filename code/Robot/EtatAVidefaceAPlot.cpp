#include "EtatAVidefaceAPlot.h"
#include "EtatAVide.h"
#include "EtatEnChargeFaceAPlot.h"

EtatAVidefaceAPlot* EtatAVidefaceAPlot::instance = new EtatAVidefaceAPlot;

EtatRobot* EtatAVidefaceAPlot::tourner() {
	return EtatAVide::getSingleton();
}

EtatRobot* EtatAVidefaceAPlot::saisir() {
	return EtatEnChargeFaceAPlot::getSingleton();
}

EtatRobot* EtatAVidefaceAPlot::evaluerPlot() {
	return this;
}

EtatAVidefaceAPlot* EtatAVidefaceAPlot::getSingleton() {
	return instance;
}
