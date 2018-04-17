#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;

double tetraedr::Volume() {
	double v = sqrt(2) * a * a * a / 12;
	if (abs((v * 12 / (sqrt(2) * a * a)) - a) >= 0.00001) {
		cerr << "ERROR VOLUME OVERFLOW" << endl;
		return 0;
	}
	return sqrt(2) * a * a * a / 12;;
}