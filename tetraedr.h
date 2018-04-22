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
	void Multimethod(shape* s, ofstream &outFile);
	void CheckWithBall(ofstream &outFile);
	void CheckWithParallelepiped(ofstream &outFile);
	void CheckWithTetraedr(ofstream &outFile);
	tetraedr() {};
	~tetraedr() {};
};
#endif