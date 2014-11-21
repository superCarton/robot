/*
 * Afficheur.h
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include <iostream>
using namespace std;
class Robot;

class Afficheur  {

private:
	Robot* obs;

public:
	Afficheur() :
			obs(NULL) {
	}

	void update(Robot* r);

	void afficher();

	void setObservable(Robot* r);
};

#endif /* AFFICHEUR_H_ */
