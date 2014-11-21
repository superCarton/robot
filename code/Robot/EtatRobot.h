#ifndef _ETATROBOT_H_
#define _ETATROBOT_H_

using namespace std;
#include <string>

class EtatRobot {

public:
	EtatRobot* avancer();

	EtatRobot* tourner();

	EtatRobot* saisir();

	EtatRobot* poser();

	EtatRobot* peser();

	EtatRobot* rencontrerPlot();

	EtatRobot* evaluerPlot();

	EtatRobot* figer();

	EtatRobot* repartir();

	string afficher();
};

#endif
