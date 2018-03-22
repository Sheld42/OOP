#ifndef __parallelepiped__
#define __parallelepiped__
#include "shape.h"

class parallelepiped : public shape {
	int a, b, c;
	float d;
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		double Volume();
		parallelepiped() {};
		~parallelepiped() {};
};
#endif