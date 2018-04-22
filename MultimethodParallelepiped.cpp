#include "Parallelepiped.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void parallelepiped::Multimethod(shape* s, ofstream &outFile)
{
	s->CheckWithParallelepiped(outFile);
}