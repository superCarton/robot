#include "Objet.h"

int Objet::getPoids() {
	return this -> poids;
}
ostream& operator<<(ostream& o, const Objet& x) {
	if (x.poids == 0) {
		return o << "Il n'y pas d'objet sur le robot" << endl;
	} else {
		return  o << "Le poids de l'objet est de : " << x.poids <<endl;
	}
}
