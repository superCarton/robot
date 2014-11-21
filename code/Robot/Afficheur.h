/*
 * Afficheur.h
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include <stdio.h>
#include "Robot.h"

using namespace std;

namespace projet_robot {
	namespace vue {
		class Afficheur {


		private:
		modele::robot::Robot obs;

		public:
		Afficheur() : obs(NULL){}

		void update(modele::robot::Robot r);

		void afficher();

		void setObservable(modele::robot::Robot r);
		};
	}
}

#endif /* AFFICHEUR_H_ */
