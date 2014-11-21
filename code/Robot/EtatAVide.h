#ifndef _ETAT_A_VIDE_H_
#define _ETAT_A_VIDE_H_

using namespace std;
#include "EtatEnRoute.h"
#include <string>


class EtatAVide: public EtatEnRoute {

private:

	static EtatAVide* instance;

public:

	EtatRobot* avancer();

	EtatRobot* rencontrerPlot();

	string afficher();

	static EtatAVide* getSingleton();

};

#endif
