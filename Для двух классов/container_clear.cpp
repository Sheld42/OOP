#include "container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Clear() {
	for (int i = 0; i < len; i++) {
		delete cont[i];
	}
	len = 0;
}