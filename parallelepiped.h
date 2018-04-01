#ifndef __parallelepiped__
#define __parallelepiped__
#include "shape.h"

class parallelepiped : public shape {
	public:
		int a, b, c;
		float d;
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		double Volume();
		void OutParallelepiped(ofstream &ofst);
		parallelepiped() {};
		~parallelepiped() {};
};
#endif