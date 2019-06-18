/*
 * Tesla.h
 *
 *  Created on: Apr 23, 2019
 *      Author: kknight
 */

#ifndef TESLA_H_
#define TESLA_H_

#include "vehicle.h"

class Tesla : public vehicle {
public:
	Tesla();
	~Tesla();
    void propulsion();
    void make();
};

#endif /* TESLA_H_ */
