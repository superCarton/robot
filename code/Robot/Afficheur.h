#include <vector>
#include <stdio.h>

using namespace std;

namespace projet_robot {
	namespace vue {
		class Afficheur {

		private:
			projet_robot::modele::robot::Robot observable;

		public:
			Afficheur() : observable(NULL){}

			void update(projet_robot::modele::robot::Robot r);

			void afficher();

			void set_observable(projet_robot::modele::robot::Robot r);
		};
	}
}
