#ifndef _ETAT_A_VIDE_FACE_A_PLOT_H_
#define _ETAT_A_VIDE_FACE_A_PLOT_H_

#include <string>
using namespace std;
#include "EtatEnRoute.h"

class EtatAVidefaceAPlot: public EtatEnRoute {

private:
	static EtatAVidefaceAPlot* instance;

public:
	EtatRobot* tourner();

	EtatRobot* saisir();

	EtatRobot* evaluerPlot();

	static EtatAVidefaceAPlot* getSingleton();

	virtual string getNomEtat() {return "Etat à vide face à plot";};

};
#endif
