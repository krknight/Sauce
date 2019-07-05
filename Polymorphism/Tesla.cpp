/*
 * Tesla.cpp
 *
 *  Created on: Apr 23, 2019
 *      Author: keithknight
 */


#include "Tesla.h"
#include <iostream>

using namespace std;

Tesla::Tesla() {

}

Tesla::~Tesla() {

}

void Tesla::propulsion() {
	cout << "Overriden Vehicle propulsion with Tesla Electric AC Motor propulsion" << endl;
}

void Tesla::show() {
	cout << "Overriden Vehicle Show with Tesla Show" << endl;
}

void Tesla::fuel(void) {
	cout << "Vehicle pure virtual implemented by Tesla's PUBLIC fuel is electricity" << endl;
}

void Tesla::feature(string& strref){
    string str = "The Tesla has " + strref;
    strref = "Volume upto 11";
    cout << str << endl;
}

