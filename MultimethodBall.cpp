#include "Ball.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

void ball::Multimethod(shape* s, ofstream &outFile)
{
	s->CheckWithBall(outFile);
}