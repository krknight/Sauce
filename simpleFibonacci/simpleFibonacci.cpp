//============================================================================
// Name        : simpleFibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int dynamicF(int , int &);

int recursiveF(int, int &);

int main() {
	int index = 0;
	int iterations= 0;
	cout << "Fibonacci series = 0,1,1,2,3,5,8,13,21,34,55,89..." << endl; // prints !!!Hello World!!!
	cout << "Enter index: ";
	cin >> index;
	cout << "Dynamic Programming yields Fibonacci value " << dynamicF(index, iterations) << " in " << iterations << " iterations\n" << endl;

	iterations = 0;
	cout << "Recursive Programming yields Fibonacci value " << recursiveF(index, iterations) << " in " << iterations << " iterations\n" << endl;


	return 0;
}

int dynamicF(int index, int & it) {
//	int series[] = {0,1};  // This works but stops cout from streaming
	vector<int> series;
	series.push_back(0);
	series.push_back(1);
//	int series[index];
//	series[0] = 0;
//	series[1] = 1;

	for (int i=2;i<(index+1);i++) {
//		series[i] = series[i-2] + series[i-1];
		series.push_back(series[i-2] + series[i-1]);
		// when index is 10 vector front is 0 and vector back is 55
		it++;
	}
//	return series[index];
//	series.pop_back();
	// return series.front() returns 0
	return series.back();
}

int recursiveF(int index, int & it) {
	int value = 0;

	if (index == 0) return 0;
	if (index == 1) return 1;

	for (int i=2;i<(index+1);i++) {
		value = recursiveF(i-1, it) + recursiveF(i-2, it);
		it++;
	}

	return value;
}
