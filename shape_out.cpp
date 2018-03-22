#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;

void shape::Out(ofstream &ofst) {
	ofst << "temperature = " << temperature;
}