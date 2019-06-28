//============================================================================
// Name        : STL_Bo_Qian.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++ Standard Template Library, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "vectorSTL.h"

using namespace std;

void iteratevector(vector<int>::iterator, vector<int>::iterator);
void iteratelist(list<int>::iterator, list<int>::iterator);


int main() {
	cout << "!!!Vectors!!!" << endl;

	vectorSTL *vObj;
	vObj = new vectorSTL();

	vector<int> vec;
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8); // vec: {4, 1, 8}

	vector<int>::iterator itr1 = vec.begin();
	vector<int>::iterator itr2 = vec.end();

    iteratevector(itr1, itr2);

	sort(itr1, itr2);

	iteratevector(itr1, itr2);

	delete vObj;

	cout << "vec size = " << vec.size() << endl;

	vector<int> vec2(vec); // Copy constructor, vec2: {1,4,8}
	vec.clear(); // vec.size() becomes 0
	vec2.swap(vec); // vec2 becomes empty and vec is {1,4,8}

	iteratevector(itr1, itr2);

	cout << "!!!Deque!!!" << endl;
	deque<int> deq;
	deq.push_back(4);
	deq.push_back(6);
	deq.push_back(7);   // deq: {4,6,7}
	deq.push_front(2);  // deq: {2,4,6,7}
	deq.push_back(3);   // deq: {2,4,6,7,3}
	cout << deq[1]; // 4

	cout << "!!!List!!!" << endl;
	list<int> mylist;
	mylist.push_back(5);
	mylist.push_back(2);
	mylist.push_back(9);  // mylist: {5,2,9}
	mylist.push_back(6);  // mylist: {5,2,9,6}
	mylist.push_front(4); // mylist: {4,5,2,9,6}

	list<int>::iterator itr = find(mylist.begin(), mylist.end(), 2);
	mylist.insert(itr,8); // {4,5,8,2,9,6}
	itr++;  // itr -> 9
	mylist.erase(itr);  // mylist: {4,8,5,2,6} erasure also takes constant time, very fast O(1)

	list<int>::iterator itrl1 = mylist.begin();
	list<int>::iterator itrl2 = mylist.end();
	iteratelist(itrl1, itrl2);

//	mylist1.splice(itr, mylist2, itr_a, itr_b); // O(1)  itr_a & b is a range in mylist2
	// mylist1 = mylist2(range (itr_a to itr_b))

	return 0;
}

void iteratevector(vector<int>::iterator itr_start, vector<int>::iterator itr_end) {
	cout << "{";
	for (vector<int>::iterator itr = itr_start; itr < itr_end; itr++) {
		cout << *itr << " ";
	}
	cout << "}" << endl;
}

void iteratelist(list<int>::iterator itr_start, list<int>::iterator itr_end) {
	cout << "{";
//	for (list<int>::iterator itr = itr_start; itr < itr_end; itr++) {
//		cout << *itr << " ";
//	}
	cout << "}" << endl;
}
