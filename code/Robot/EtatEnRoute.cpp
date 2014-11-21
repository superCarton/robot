#include "EtatEnRoute.h"
#include "EtatFige.h"

EtatRobot* EtatEnRoute::figer() {
	EtatFige::getSingleton()->setEtatPrecedent(this);
	return EtatFige::getSingleton();
}
