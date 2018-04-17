#include <fstream>
#include <iostream>
#include "parallelepiped.h"

using namespace std;

double parallelepiped::Volume() {
	double v = a * b * c;
	if (abs(v / (a * b) - c) >= 0.00001) {
		cerr << "ERROR VOLUME OVERFLOW" << endl;
		return 0;
	}
	return a * b * c;
}