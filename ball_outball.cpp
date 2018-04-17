#include <fstream>
#include <iostream>
#include "ball.h"

using namespace std;
void CheckOutputFile(ofstream &ofst);

void ball::OutBall(ofstream &ofst) {
	CheckOutputFile(ofst);
	Out(ofst);
}