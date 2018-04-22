#include "Tetraedr.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void tetraedr::Multimethod(shape* s, ofstream &outFile)
{
	s->CheckWithTetraedr(outFile);
}