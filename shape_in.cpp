#include <fstream>
#include <iostream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;
void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

shape* shape::In(ifstream &ifst) {
	shape *sp;
	int k;
	CheckInputFile(ifst);
	ifst >> k;
	CheckWrongInput(ifst);
	if (!(1 <= k && k <= 3)) {
		cerr << "Error: unknown type" << endl;
		exit(1);
	}
	
	if (ifst.eof()) {
		cerr << "Error: no data after type!" << endl;
		exit(1);
	}
	switch (k) {
	case 1:
		sp = new ball;
		break;
	case 2:
		sp = new parallelepiped;
		break;
	case 3:
		sp = new tetraedr;
		break;
	default:
		cerr << "Error: unknown type" << endl;
		return 0;
	}
	sp->InData(ifst);
	return sp;
}