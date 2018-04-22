#include <fstream>
#include "parallelepiped.h"

using namespace std;

void parallelepiped::Out(ofstream &ofst) {
	ofst << "It is Parallelepiped: a = "
		<< a << ", b = " << b
		<< ", c = " << c
		<< ", Density = " << d << endl;
}