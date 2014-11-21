#ifndef POSITION_H_
#define POSITION_H_

#include <string>
using namespace std;

class Position {

private:
	int x;
	int y;

public:
	Position(int abs=0, int ord=0) : x(abs), y(ord){
	}

	void setx(int x);

	void sety(int y);

	int getx();

	int gety();

	string afficher();
};
#endif
