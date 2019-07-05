/*
 * RangeRover.h
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */

#ifndef RANGEROVER_H_
#define RANGEROVER_H_

#include "Vehicle.h"

class RangeRover : public Vehicle {
public:
	void propulsion();
	void show();
private:
	void fuel(void); // krk

};



#endif /* RANGEROVER_H_ */
