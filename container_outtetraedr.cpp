#include "container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ofstream &ofst);

void container::OutTetraedr(ofstream &ofst) {
	CheckOutputFile(ofst);
	if (len) {
		ofst << "Container contains " << len << " elements." << endl;
		ofst << "Only tetraedrs." << endl;
	}
	else
		ofst << "Container is empty:\n";
	for (int i = 0; i < len; i++) {
		ofst << i + 1 << ": ";
		cont[i]->OutTetraedr(ofst);
	}
}