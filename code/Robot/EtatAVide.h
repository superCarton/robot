using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatAVide : projet_robot::modele::etats::EtatEnRoute {


			public:
				virtual void avancer();

				virtual void rencontrerPlot();

				virtual string afficher();
				
			};
		}
	}
}
