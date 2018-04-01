#ifndef __tetraedr__
#define __tetraedr__

#include "shape.h"

class tetraedr :public shape {
public:
	int a;
	float d;

	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	double Volume();
	void OutTetraedr(ofstream &ofst);
	tetraedr() {};
	~tetraedr() {};
};
#endif