#ifndef __ball__
#define __ball__

#include "shape.h"

class ball :public shape {
	int r;
	float d;
	public:
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		void Multimethod(shape* s, ofstream &outFile);
		void CheckWithBall(ofstream &outFile);
		void CheckWithParallelepiped(ofstream &outFile);
		ball() {};
		~ball() {};
};
#endif