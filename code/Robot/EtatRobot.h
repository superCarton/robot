using namespace std;

namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatRobot {

			protected:
				static EtatRobot& instance;

			public:
				void avancer();

				void tourner();

				void saisir();

				void poser();

				void peser();

				void rencontrerPlot();

				void evaluerPlot();

				void figer();

				void repartir();

				string afficher();

				virtual static projet_robot::modele::etats::EtatRobot& getSingleton();
			};
		}
	}
}
