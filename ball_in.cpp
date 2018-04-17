#include <fstream>
#include <iostream>
#include "ball.h"

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void ball::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	ifst >> r >> d;
	CheckWrongInput(ifst);
	if (r <= 0 || d <= 0) {
		cerr << "Error: Incorrect values in ball input" << endl;
		exit(1);
	}
	shape::InData(ifst);
}