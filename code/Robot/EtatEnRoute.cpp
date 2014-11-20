#include "EtatEnRoute.h"

void projet_robot::modele::etats::EtatEnRoute::figer() {
	dynamic_cast<EtatFige>(projet_robot::modele::etats::EtatFige::getSingleton()).setEtatPrecedent(*this);
	projet_robot::modele::robot::Robot::getSingleton().setEtat(EtatFige::getSingleton());
}
