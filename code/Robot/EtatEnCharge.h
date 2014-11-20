using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatEnCharge : projet_robot::modele::etats::EtatEnRoute {


			public:
				void avancer();

				void peser();

				void rencontrerPlot();

				string afficher();

				projet_robot::modele::etats::EtatRobot getSingleton();
			};
		}
	}
}
