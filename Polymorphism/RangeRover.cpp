/*
 * RangeRover.cpp
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */

#include "RangeRover.h"
#include <iostream>

using namespace std;

//RangeRover::RangeRover() {
//
//}

void RangeRover::propulsion() {
	cout << "Overriden Vehicle propulsion with Range Rover ICE propulsion" << endl;
	fuel();
}

void RangeRover::show() {
	cout << "Overriden Vehicle Show with Range Rover Show" << endl;
}

void RangeRover::fuel(void) {
	cout << "Vehicle pure virtual implemented by Range Rover's PRIVATE (called from propulsion) fuel is gasoline" << endl;
}


