using namespace std;

namespace projet_robot {
	namespace modele {
		namespace robot {
			class Objet {

			private:
				int poids;

			public:
				Objet(int p): poids(p){}
				int getPoids();
				string afficher();
			};
		}
	}
}
