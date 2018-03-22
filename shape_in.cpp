#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;

shape* shape::In(ifstream &ifst) {
	shape *sp;
	int k;
	ifst >> k;
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
		return 0;
	}
	sp->InData(ifst);
	return sp;
}