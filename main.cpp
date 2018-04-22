#include <iostream>
#include <fstream>
#include "container.h"
#include "gtest/gtest.h"
#include "Test.h"
#include "Protect.h"

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cout << "incorrect command line! "
			 "Waited: command infile outfile" << endl;
		exit(1);
	}
	
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	CheckInputFile(ifst);
	cout << "Start" << endl;
	container c;
	c.In(ifst);
	ofst << "Filled container. " << endl;
	c.Multimethod(ofst);
	cout << "Stop" << endl;
	ifst.close();
	ofst.close();
	
	return 0;	
	/*::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();*/
}