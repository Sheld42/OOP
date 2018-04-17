#include <fstream>
#include <iostream>
#include "ball.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void ball::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "It is Ball: r = " << r << ", Density = " << d << endl;
	shape::Out(ofst);
	ofst << endl;
}