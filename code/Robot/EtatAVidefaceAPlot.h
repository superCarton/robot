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

	string afficher();

	static EtatAVidefaceAPlot* getSingleton();

};
#endif
