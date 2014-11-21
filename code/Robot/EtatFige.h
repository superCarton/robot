/*
 * EtatFige.h
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#ifndef _ETATFIGE_H_
#define _ETATFIGE_H_

#include "EtatRobot.h"
class EtatEnRoute;
using namespace std;

class EtatFige: public EtatRobot {

private:
	EtatEnRoute* etatPrecedent;
	static EtatFige* instance;

public:
	EtatRobot* repartir();
	void setEtatPrecedent(EtatEnRoute*);
	string afficher();
	static EtatFige* getSingleton();
};

#endif /* CODE_ROBOT_ETATFIGE_H_ */
