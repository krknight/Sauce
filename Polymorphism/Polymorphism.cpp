//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vehicle.h"
#include "Tesla.h"
#include "RangeRover.h"

using namespace std;

int main() {

	string str_main;

//	Vehicle v;  //krk
	Tesla t;
	RangeRover r;

//	cout << "show function for Vehicle, Tesla, RangeRover" << endl;
//	v.show(); // krk
	t.show(); // krk parent class routine replace by child class routine of the same name
	r.show();

//	cout << "virtual propulsion function for Vehicle, Tesla, RangeRover" << endl;
//	v.propulsion();  //krk
	t.propulsion();
	r.propulsion();

	cout << "Vehicle base class points to child class Tesla" << endl;
	Vehicle * base;
	base = &t;
	base->propulsion();

//	cout << "Vehicle base class equals child class RangeRover" << endl; //krk
//	Vehicle b;
//	b = r;
//	b.propulsion();

	t.fuel();  // krk implemented virtual function
	t.generic_vehicle(); // krk inherited parent class routine
	str_main = "Volume";
	cout << "Before t.feature() str_main is " << str_main << endl;
	t.feature(str_main);
	cout << "After t.feature() str_main is " << str_main << endl;


	return 0;
}
