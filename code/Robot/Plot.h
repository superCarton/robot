using namespace std;

namespace projet_robot {
	namespace modele {
		namespace robot {
			class Plot {

			private:
				int hauteur;
				Objet objet;

			public:
				Plot(int h, Objet obj) : hauteur(h), objet(obj){}
				int getHauteur();
				Objet getObjet();
				string afficher();
			};
		}
	}
}
