/*
 * Vehicle.cpp
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
	data = 0;
}

Vehicle::~Vehicle() {

}

void Vehicle::propulsion() {
	cout << "Energy converter" << endl;
}

void Vehicle::show() {
	cout << "Vehicle" << endl;
}

string Vehicle::generic_vehicle() {
	string str = "This vehicle has a steering wheel";
	return str;
}


