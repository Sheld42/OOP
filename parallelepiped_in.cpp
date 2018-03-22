#include <fstream>
#include "parallelepiped.h"

using namespace std;

void parallelepiped::InData(ifstream &ifst) {
	ifst >> a >> b >> c >> d;
}