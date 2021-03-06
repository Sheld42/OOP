#ifndef __shape__
#define __shape__
#include <fstream>

using namespace std;

class shape {
	public:
		shape() {};
		virtual ~shape() {};
		static shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
		virtual void Multimethod(shape* s, ofstream &outFile) = 0;
		virtual void CheckWithBall(ofstream &outFile) = 0;
		virtual void CheckWithParallelepiped(ofstream &outFile) = 0;
};
#endif