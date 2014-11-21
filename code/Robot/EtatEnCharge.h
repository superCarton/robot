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

	string afficher();

	static EtatEnCharge* getSingleton();
};

#endif
