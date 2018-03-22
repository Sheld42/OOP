#include <fstream>
#include <iostream>
#include "ball.h"

using namespace std;

void ball::InData(ifstream &ifst) {
	ifst >> r >> d;
	shape::InData(ifst);
}