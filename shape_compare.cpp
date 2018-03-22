#include <fstream>
#include "shape.h"
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"

using namespace std;

bool shape::Compare(shape &other) {
	return Volume() < other.Volume();
} 