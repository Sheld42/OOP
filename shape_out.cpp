#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void shape::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << "temperature = " << temperature;
}