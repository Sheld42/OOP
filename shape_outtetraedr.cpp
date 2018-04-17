#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void shape::OutTetraedr(ofstream &ofst) {
	CheckOutputFile(ofst);
	ofst << endl;
}