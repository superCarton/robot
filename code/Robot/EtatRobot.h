#ifndef _ETATROBOT_H_
#define _ETATROBOT_H_

using namespace std;
#include <string>
#include <ostream>

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

	static EtatRobot* getIni();

	friend ostream& operator<<(ostream&, const EtatRobot&);

	virtual string getNomEtat() {return "rien";};


};

#endif
