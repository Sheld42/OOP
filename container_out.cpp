#include "container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Out(ofstream &ofst)
{
	ofst << "Container contents " << len << " elements." << endl;
	for (int i = 0; i < len; i++) {
		ofst << i + 1 << ": ";
		cont[i]->Out(ofst);
	}
}