using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatAVidefaceAPlot : projet_robot::modele::etats::EtatEnRoute {


			public:
				void tourner();

				void saisir();

				void evaluerPlot();

				string afficher();

				projet_robot::modele::etats::EtatRobot getSingleton();
			};
		}
	}
}
