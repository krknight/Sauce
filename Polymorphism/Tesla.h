/*
 * Tesla.h
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */

#ifndef TESLA_H_
#define TESLA_H_

#include "Vehicle.h"

class Tesla : public Vehicle {
public:
	Tesla();
	~Tesla();
    void propulsion();
    void show();

	void fuel(void); // krk

	void feature(string&); // krk
};

#endif /* TESLA_H_ */
