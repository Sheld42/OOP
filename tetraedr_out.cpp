#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;

void tetraedr::Out(ofstream &ofst) {
	ofst << "It is Tetraedr: a = " << a << ", Density = " << d << endl;
	shape::Out(ofst);
	ofst << endl;
}