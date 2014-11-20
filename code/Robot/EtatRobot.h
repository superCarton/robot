namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatRobot {

			private:
				int instance;

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

				void afficher();

				projet_robot::modele::etats::EtatRobot getSingleton();
			};
		}
	}
}
