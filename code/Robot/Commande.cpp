/*
 * Commande.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: jonathan
 */

#include "Commande.h"


Commande* Commande::construire(string nom) {
	return listeCommande[nom];
}

map<string, *Commande> Commande::listeCommande["AVANCER"] = new CommandeAvancer;

