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

EtatEnChargeFaceAPlot* EtatEnChargeFaceAPlot::getSingleton() {
	return instance;
}


