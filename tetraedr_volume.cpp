#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;

double tetraedr::Volume() {
	return sqrt(2)*a*a*a / 12;;
}