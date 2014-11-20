namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatAVide : projet_robot::modele::etats::EtatEnRoute {


			public:
				void avancer();

				void rencontrerPlot();

				void afficher();

				projet_robot::modele::etats::EtatRobot getSingleton();
			};
		}
	}
}
