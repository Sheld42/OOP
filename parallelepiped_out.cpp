#include <fstream>
#include "parallelepiped.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void parallelepiped::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "It is Parallelepiped: a = "
		<< a << ", b = " << b
		<< ", c = " << c
		<< ", Density = " << d << endl;
	shape::Out(ofst);
	ofst << endl;
}