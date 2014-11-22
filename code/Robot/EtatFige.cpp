/*
 * EtatFige.cpp
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#include "EtatFige.h"

EtatFige* EtatFige::instance = new EtatFige;

EtatRobot* EtatFige::repartir(){
	return reinterpret_cast<EtatRobot*>(etatPrecedent);
}

void EtatFige::setEtatPrecedent(EtatEnRoute* e){
	etatPrecedent = e;
}

EtatFige* EtatFige::getSingleton() {
	return instance;
}
