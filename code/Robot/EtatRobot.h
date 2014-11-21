#ifndef _ETATROBOT_H_
#define _ETATROBOT_H_

using namespace std;
#include <string>

class EtatRobot {

private:
	static EtatRobot* premierEtat;

public:

	virtual EtatRobot* avancer();

	virtual EtatRobot* tourner();

	virtual EtatRobot* saisir();

	virtual EtatRobot* poser();

	virtual EtatRobot* peser();

	virtual EtatRobot* rencontrerPlot();

	virtual EtatRobot* evaluerPlot();

	virtual EtatRobot* figer();

	virtual EtatRobot* repartir();

	virtual string afficher();

	static EtatRobot* getIni();

};

#endif
