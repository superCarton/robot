namespace projet_robot {
	namespace modele {
		namespace etats {
			class EtatEnChargeFaceAPlot : projet_robot::modele::etats::EtatEnRoute {


			public:
				void tourner();

				void poser();

				void peser();

				void afficher();

				projet_robot::modele::etats::EtatRobot getSingleton();
			};
		}
	}
}
