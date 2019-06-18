/*
 * vehicle.h
 *
 *  Created on: Apr 23, 2019
 *      Author: kknight
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

class vehicle { // this is an abstract class because it contains at least one virtual function

protected:
	int data;

public:
	vehicle();
	virtual ~vehicle();
	virtual void propulsion() = 0; // krk added = 0; to make into a pure virtual function
	void make();
};



#endif /* VEHICLE_H_ */
