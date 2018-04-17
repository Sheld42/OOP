#include <fstream>
#include "parallelepiped.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void parallelepiped::OutParallelepiped(ofstream &ofst) {
	CheckOutputFile(ofst);
	Out(ofst);
}