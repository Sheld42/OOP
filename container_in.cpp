#include "container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

container::container() : len(0) { }

void CheckInputFile(ifstream &ifst);

void container::In(ifstream &ifst) {
	CheckInputFile(ifst);
	while (!ifst.eof() && max_len != len) {
		if ((cont[len] = shape::In(ifst)) != 0) {
			len++;
		}
	}
}