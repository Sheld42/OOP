#include <fstream>
#include <iostream>
#include "tetraedr.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void tetraedr::OutTetraedr(ofstream &ofst) {
	CheckOutputFile(ofst);
	Out(ofst);
}