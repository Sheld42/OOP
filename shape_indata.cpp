#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;

void shape::InData(ifstream &ifst) {
	ifst >> temperature;
}