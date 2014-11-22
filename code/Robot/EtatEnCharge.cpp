#include "EtatEnCharge.h"
#include "EtatEnChargeFaceAPlot.h"

EtatEnCharge* EtatEnCharge::instance = new EtatEnCharge;

EtatRobot* EtatEnCharge::avancer() {
	return this;
}

EtatRobot* EtatEnCharge::peser() {
	return this;
}

EtatRobot* EtatEnCharge::rencontrerPlot() {
	return EtatEnChargeFaceAPlot::getSingleton();
}

EtatEnCharge* EtatEnCharge::getSingleton() {
	return instance;
}
