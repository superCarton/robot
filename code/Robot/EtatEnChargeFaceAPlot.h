#include "EtatEnRoute.h"
using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatEnChargeFaceAPlot : projet_robot::modele::etats::EtatEnRoute {


			public:
				void tourner();

				void poser();

				void peser();

				string afficher();
			};
		}
	}
}
