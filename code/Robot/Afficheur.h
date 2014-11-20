#include <vector>;
#include <stdio.h>;
#include "Robot.h";

using namespace std;

namespace projet_robot {
	namespace vue {
		class Afficheur {

		private:
			Robot observable;

		public:
			Afficheur() : observable(NULL){}

			void update(Robot r);

			void afficher();

			void set_observable(Robot r);
		};
	}
}
