#ifndef _ETAT_EN_CHARGE_H_
#define _ETAT_EN_CHARGE_H_

#include "EtatEnRoute.h"
using namespace std;

class EtatEnCharge: public EtatEnRoute {

private:
	static EtatEnCharge* instance;

public:
	EtatRobot* avancer();

	EtatRobot* peser();

	EtatRobot* rencontrerPlot();

	static EtatEnCharge* getSingleton();

	virtual string getNomEtat() {return "Etat en charge";};
};

#endif
