/*
 * mapSTL.cpp
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#include "mapSTL.h"
#include <iostream>

mapSTL::mapSTL() {
	// TODO Auto-generated constructor stub

}

mapSTL::~mapSTL() {
	// TODO Auto-generated destructor stub
}

void mapSTL::doMap(void) {
	cout << "doMap()" << endl;
	mymap.insert(pair<char,int>('a',100));
	mymap.insert(make_pair('z', 200));
	it = mymap.begin();
	mymap.insert(it, pair<char,int>('b',300)); // "it" is a hint

	it = mymap.find('z'); // O(log(n))

	// showing contents:
	for(it=mymap.begin(); it != mymap.end(); it++)
		cout << (*it).first << " => " << (*it).second << endl;
}

