#include "container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Sort() {
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (cont[i]->Compare(*cont[j])) {
				shape *tmp = cont[i];
				cont[i] = cont[j];
				cont[j] = tmp;
			}
		}
	}
}