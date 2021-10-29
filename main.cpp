#include <iostream>

#include "support/Problem.h"
#include "problems/Day144.h"

using namespace std;
using namespace problems;

int main()
{
	cout << "Daily coding problem!\r\n";
	Problem* problem = new Day144();
	problem->run();
	delete problem;
	return 0;
}

