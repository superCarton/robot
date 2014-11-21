#ifndef _ETAT_EN_CHARGE_FACE_A_PLOT_H_
#define _ETAT_EN_CHARGE_FACE_A_PLOT_H_

#include "EtatEnRoute.h"
using namespace std;

class EtatEnChargeFaceAPlot: public EtatEnRoute {

private:
	static EtatEnChargeFaceAPlot* instance;

public:
	EtatRobot* tourner();

	EtatRobot* poser();

	EtatRobot* peser();

	string afficher();

	static EtatEnChargeFaceAPlot* getSingleton();
};

#endif
