/*
 * mapSTL.h
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#ifndef MAPSTL_H_
#define MAPSTL_H_

#include <map>

using namespace std;

class mapSTL {
public:
	mapSTL();
	virtual ~mapSTL();

	map<char,int> mymap;
	map<char,int>::iterator it;

	void doMap(void);
};

#endif /* MAPSTL_H_ */
