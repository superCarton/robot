/*
 * CommandeAvancer.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: jonathan
 */

#include "CommandeAvancer.h"

void CommandeAvancer::execute() {
	robot.avancer(5);
	derniereCommande.push_back(*this);
}

