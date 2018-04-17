#include <fstream>
#include <iostream>
#include "parallelepiped.h"

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void parallelepiped::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	ifst >> a >> b >> c >> d;
	CheckWrongInput(ifst);
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		cerr << "Error: Incorrect values in parallelepiped input" << endl;
		exit(1);
	}
	shape::InData(ifst);
}