//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "vehicle.h"
#include "Tesla.h"
#include "RangeRover.h"

using namespace std;

int main() {

	// vehicle v; krk can't instantiate an abstract class because it contains a pure virtual func
	Tesla t;
	RangeRover r;

	cout << "Make of Vehicle, Tesla, RangeRover" << endl;
	// v.make(); krk does not make sense for base class
	t.make();
	r.make();

	cout << "Virtual propulsion function for Vehicle, Tesla, RangeRover" << endl;
	// v.propulsion(); krk does not make sense for base class
	t.propulsion();
	r.propulsion();

	cout << "Vehicle base class points to child class Tesla" << endl;
	vehicle * base;
	base = &t;
	base->propulsion();


	return 0;
}
