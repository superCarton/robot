/*
 * EtatFige.cpp
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#include "EtatFige.h"

projet_robot::modele::etats::EtatRobot& projet_robot::modele::etats::EtatRobot::instance = EtatFige();

void projet_robot::modele::etats::EtatFige::repartir(){
}

void projet_robot::modele::etats::EtatFige::setEtatPrecedent(EtatEnRoute e){
	etatPrecedent = e;
}

string projet_robot::modele::etats::EtatFige::afficher() {
	string s;
	s += "Etat fige\n";
	s += 
	return s;
}

