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
		virtual void OutBall(ofstream &ofst);
		virtual void OutParallelepiped(ofstream &ofst);
};
#endif