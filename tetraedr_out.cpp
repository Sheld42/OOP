#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void tetraedr::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "It is Tetraedr: a = " << a << ", Density = " << d << endl;
	shape::Out(ofst);
	ofst << endl;
}