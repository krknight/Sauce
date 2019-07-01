/*
 * setSTL.cpp
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#include "setSTL.h"
#include <iostream>

setSTL::setSTL() {
	myset.insert(3);
	myset.insert(1);
	myset.insert(7); // myset: {1,3,7}, O(log(n))
}

setSTL::~setSTL() {
	// TODO Auto-generated destructor stub
}

void setSTL::doSets() {
	cout << "doSet()" << endl;
	it = myset.find(7); // sequence containers don't have a find function
	                    // takes O(log(n)) to search, much faster than Seq Cont linear time

	pair<set<int>::iterator, bool> ret;  // an insert returns a pair, the bool is
	                                     // whether the insert was successful
	ret = myset.insert(3);  // no new element inserted
	if (ret.second == false)
		it = ret.first;     // "it" now points to element 3

	myset.insert(it, 9);    // myset: {1,3,7,9} O(log(n)) => O(1)

	myset.erase(it);        // it points to 3, therefore {1,7,9}
	myset.erase(7);         // {1,9}

	// Show contents, remember it is read only
//	for(it.begin() : myset) {
//		cout << *it << endl;
//	}

	for (set<int>::iterator sitr = myset.begin(); sitr != myset.end(); sitr++) {
		cout << *sitr << endl;
	}

}

