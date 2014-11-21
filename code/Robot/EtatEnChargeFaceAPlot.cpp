#include "EtatEnChargeFaceAPlot.h"
#include "EtatAVidefaceAPlot.h"
#include "EtatEnCharge.h"

EtatEnChargeFaceAPlot* EtatEnChargeFaceAPlot::instance = new EtatEnChargeFaceAPlot;

EtatRobot* EtatEnChargeFaceAPlot::tourner() {
	return EtatEnCharge::getSingleton();
}

EtatRobot* EtatEnChargeFaceAPlot::poser() {
	return EtatAVidefaceAPlot::getSingleton();
}

EtatRobot* EtatEnChargeFaceAPlot::peser() {
	return this;
}

string EtatEnChargeFaceAPlot::afficher() {
	return "Etat en charge face à plot";
}

EtatEnChargeFaceAPlot* EtatEnChargeFaceAPlot::getSingleton() {
	return instance;
}



