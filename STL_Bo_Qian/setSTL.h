/*
 * setSTL.h
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#ifndef SETSTL_H_
#define SETSTL_H_

#include <set>

using namespace std;

class setSTL {
public:
	setSTL();
	virtual ~setSTL();

	void doSets(void);

	set<int> myset;
	set<int>::iterator it;
};

#endif /* SETSTL_H_ */
