#ifndef __ball__
#define __ball__

#include "shape.h"

class ball :public shape {
	public:
		int r;
		float d;
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		double Volume();
		void OutBall(ofstream &ofst);
		ball() {};
		~ball() {};
};
#endif