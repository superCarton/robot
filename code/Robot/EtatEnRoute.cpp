#include "EtatEnRoute.h"
#include "EtatFige.h"

EtatRobot* EtatEnRoute::figer() {
	EtatFige::getSingleton()->setEtatPrecedent(this);
	return EtatFige::getSingleton();
}

ostream& operator<<(ostream& o, const EtatEnRoute& e) {
	return o << "Ne doit pas être appelé 2" << endl;
}
