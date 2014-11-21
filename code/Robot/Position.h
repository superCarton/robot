#include <string>
using namespace std;

namespace projet_robot {
	namespace modele {
		namespace robot {
			class Position {

			private:
				int x;
				int y;

			public:
				Position(int abs, int ord) : x(abs), y(ord){}

				void setx(int x);

				void sety(int y);

				int getx();

				int gety();

				string afficher();
			};
		}
	}
}
