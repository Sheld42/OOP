#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;
void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void tetraedr::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	ifst >> a >> d;
	CheckWrongInput(ifst);
	if (a <= 0 || d <= 0) {
		cerr << "Error: Incorrect values in tetrahedron input" << endl;
		exit(1);
	}
	shape::InData(ifst);
}