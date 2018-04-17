#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;
void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void shape::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	ifst >> temperature;
	CheckWrongInput(ifst);
}