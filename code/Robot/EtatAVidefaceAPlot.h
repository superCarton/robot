using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatAVidefaceAPlot : projet_robot::modele::etats::EtatEnRoute {


			public:
				virtual void tourner();

				virtual void saisir();

				virtual void evaluerPlot();

				virtual string afficher();

			};
		}
	}
}
