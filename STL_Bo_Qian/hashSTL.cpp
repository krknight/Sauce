/*
 * hashSTL.cpp
 *
 *  Created on: Jun 30, 2019
 *      Author: keithknight
 */

#include "hashSTL.h"
#include <iostream>

using namespace std;

hashSTL::hashSTL() {
	// TODO Auto-generated constructor stub

}

hashSTL::hashSTL(string str) {
	tststr = str;
}

hashSTL::~hashSTL() {
	// TODO Auto-generated destructor stub
}

string hashSTL::getstr() {
	return tststr;
}

void hashSTL::foo(const unordered_map<char, string>& m) {
	// m['S'] = "SUNDAY"; Fail, can't modify
	//cout << m['S'] << endl; Fail, because compiler thinks trying to modify
	auto itr = m.find('T');
	if (itr != m.end())
		cout << (*itr).second << endl;
}

void hashSTL::arraybasedcont(void) {
//    vector<int> vec = {1,2,3,4};
	array<int,4> arr = {1,2,3,4};
	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//	vec.insert(arr.begin(),arr.end());
    int *p = &vec[2]; // p points to 3
    vec.insert(vec.begin(), 0);
    cout << *p << endl; // bad call because the pointer gets invalidated after adding a new element
}

void hashSTL::doHash(void) {
	cout << "doHash()" << endl;
	myset.insert("red");
	myset.insert("green");
	myset.insert("blue");
	itr = myset.find("green"); // O(1) constant time, fastest find time of all containers

	if (itr != myset.end()) // find returns iterator to green or the end if can't find green
		cout << *itr << endl;
	myset.insert("yellow");    // O(1)

	vec.push_back("purple");
	vec.push_back("pink");
	myset.insert(vec.begin(), vec.end());

	cout << "load_factor = " << myset.load_factor() << endl; // ratio of total elements / total buckets
	string x = "red";
	cout << x << " is in bucket #" << myset.bucket(x) << endl;
	cout << "Total bucket #" << myset.bucket_count() << endl;

	day.insert(make_pair('S', "Sunday"));
	day.insert(make_pair('M', "Monday"));
	day['T'] = "Tuesday";

	cout << day['S'] << endl;    // No range check
	cout << day.at('M') << endl; // Has range check

	day.insert(make_pair('M', "MONDAY")); // Fails because we can't insert over an existing element
	day['M'] = "MONDAY"; // subscript operator can modify the existing member

	foo(day);
	arraybasedcont();
}

