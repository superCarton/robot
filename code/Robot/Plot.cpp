#include "Plot.h"

int Plot::getHauteur() {
	return this->hauteur;
}

ostream& operator<<(ostream& os, const Plot& p){
	if(p.hauteur == 0) {
		return os << "Il n'y pas de plot devant le robot" << endl;
	} else {
		return os << "La hauteur du plot est de : " << p.hauteur << endl;
	}
}
