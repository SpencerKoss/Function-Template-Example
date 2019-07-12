//This Simple program is designed to display how you can use multiple parameters in order to work with different
//types of data. Separating them by one or more generic classes

#include "pch.h"
#include <iostream>
using namespace std;

//F and S are generic classes in order to take in multiple types of data
template <class F, class S>

//displaySmaller() is desgined to display the smaller number with two different data types
F displaySmaller(F a, S b) {
	return (a < b ? a : b);
}

int main()
{
	int x = 89;
	double y = 56.8;

	cout << "The smaller number of "<< x << " and " << y << " is: " << displaySmaller(y, x) << endl;
}


//Output:
//The smaller number of 89 and 56.8 is: 56.8

