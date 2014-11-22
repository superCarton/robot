#ifndef _ETAT_EN_ROUTE_H_
#define _ETAT_EN_ROUTE_H_

#include "EtatRobot.h"
class EtatFige;

class EtatEnRoute: public EtatRobot {

public:
	virtual EtatRobot* figer();
	friend ostream& operator<<(ostream&, const EtatEnRoute&);
};

#endif
