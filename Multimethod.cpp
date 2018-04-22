#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Multimethod(ofstream &ofst)
{
	ofst << "Multimethod." << endl;
	shape *s1;
	shape *s2;
	for (int i = 0; i < len; i++)
	{
		s1 = cont[i];
		for (int j = 0; j < len; j++)
		{
			s2 = cont[j];
			s1->Multimethod(s2, ofst);
			s1->Out(ofst);
			s2->Out(ofst);
		}
	}
}