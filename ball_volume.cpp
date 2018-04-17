#include <fstream>
#include <iostream>
#include "ball.h"

using namespace std;

double ball::Volume() {
	double v = 4 * 3.14 * r * r * r / 3;
	if (abs((v * 3 / (4 * 3.14 * r * r)) - r) >= 0.00001) {
		cerr << "ERROR VOLUME OVERFLOW" << endl;
		return 0;
	}
	return 4 * 3.14 * r * r * r / 3;
}