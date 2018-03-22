#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;

void tetraedr::InData(ifstream &ifst) {
	ifst >> a >> d;
}