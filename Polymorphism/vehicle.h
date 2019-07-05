/*
 * Vehicle.h
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <string> // krk

using namespace std; // krk

class Vehicle {

protected:
	int data;

public:
	Vehicle();
	virtual ~Vehicle();
	virtual void propulsion();
	virtual void fuel() = 0;  // krk
	void show();
	string generic_vehicle(); // krk
};

#endif /* VEHICLE_H_ */
