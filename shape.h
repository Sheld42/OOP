#ifndef __shape__
#define __shape__
#include <fstream>

using namespace std;

class shape {
	public:
		int temperature;
		shape() {};
		virtual ~shape() {};
		static shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
		virtual double Volume() = 0;
		bool Compare(shape &other);
		virtual void OutBall(ofstream &ofst);
		virtual void OutParallelepiped(ofstream &ofst);
		virtual void OutTetraedr(ofstream &ofst);
		virtual void Multimethod(shape* s, ofstream &outFile) = 0;
		virtual void CheckWithBall(ofstream &outFile) = 0;
		virtual void CheckWithParallelepiped(ofstream &outFile) = 0;
		virtual void CheckWithTetraedr(ofstream &outFile) = 0;

};
#endif