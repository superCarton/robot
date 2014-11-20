namespace projet_robot {
	namespace vue {
		class Afficheur {


		public:
			void update(projet_robot::modele::robot::Robot r);

			void afficher();

			void set_observable(projet_robot::modele::robot::Robot r);
		};
	}
}
