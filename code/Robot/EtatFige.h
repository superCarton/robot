/*
 * EtatFige.h
 *
 *  Created on: 20 nov. 2014
 *      Author: jonathan
 */

#ifndef CODE_ROBOT_ETATFIGE_H_
#define CODE_ROBOT_ETATFIGE_H_

using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
		class EtatFige : projet_robot::modele::etats::EtatRobot {

		private:
			EtatEnRoute etatPrecedent;

		public:
			void repartir();
			void setEtatPrecedent(EtatEnRoute); 
			string afficher();

			};
		}
	}
}


#endif /* CODE_ROBOT_ETATFIGE_H_ */
