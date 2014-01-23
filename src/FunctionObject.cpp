//============================================================================
// Name        : FunctionObject.cpp
// Author      : Adam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class F {
public:
	int operator() (int n)
	{
		int ret = n;
		return ret;
	}
};


int main() {

	F f;

	cout << f(12345) << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
