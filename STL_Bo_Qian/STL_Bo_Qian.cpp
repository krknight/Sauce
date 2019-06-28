//============================================================================
// Name        : STL_Bo_Qian.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++ Standard Template Library, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "vectorSTL.h"

using namespace std;

void iterate(vector<int>::iterator, vector<int>::iterator);


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

    iterate(itr1, itr2);

	sort(itr1, itr2);

	iterate(itr1, itr2);

	delete vObj;

	return 0;
}

void iterate(vector<int>::iterator itr_start, vector<int>::iterator itr_end) {
	cout << "{";
	for (vector<int>::iterator itr = itr_start; itr < itr_end; itr++) {
		cout << *itr << " ";
	}
	cout << "}" << endl;
}
