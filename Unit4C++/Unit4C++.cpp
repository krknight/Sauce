//============================================================================
// Name        : Unit4C++.cpp
// Author      : Keith Knight
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int findElement(int arr[], int n, int key) {
	int i;
	for (i=0;i<n;i++)
		if (arr[i] == key)
			return i;
	return -1;
}

int binarySearch(vector<int> arr, int value) {
	// Find index of value we are searching for
	int start = 0;
	int end = arr.size()-1;
	int index = -1;
	int mid = 0;

	cout << "value = " << value << endl;

	// iteration
	while(start<=end) {
		mid = (end-start)/2;
//		if (mid<=start) mid = start + 1;
		cout << "start = " << start << endl;
		cout << "mid = " << mid << endl;
		cout << "end = " << end << endl;
		if (value < arr[mid]) {
			// value in lower partition
			//start = 0;
			end = mid-1;
		} else if (value > arr[mid]) {
			// value in higher partition
			start = mid+1;
			//end = arr.size()-1;
		} else if (value == arr[mid]) {
			// found the value
			index = mid;
			break;
		}
	}
	return index;
}

void swap(int & val1, int & val2) {
	int temp = val1;
	val1 = val2; // this swaps the value
	val2 = temp;
}

void bubbleSort(vector<int> & sort_it) {
	int swapped = 0;
//    cout << "Array Size = " << sort_it.size() << endl;
	for (int i=0;i<sort_it.size();i++) { // need to do this size times e.g 5
		swapped = 0;
		for (int j=0;j<sort_it.size()-i;j++) { //don't need to bubble sort all the way to the end (already sorted!)
			if (sort_it[j] > sort_it[j+1]) {
	//			cout << "1 " << sort_it[j] << " > " << sort_it[j+1] << endl;
				swap(sort_it[j], sort_it[j+1]);
	//			cout << "2 " << sort_it[j] << " < " << sort_it[j+1] << endl;
				swapped = 1;
			}
		}
		if (swapped == 0) break; // No swaps occurred therefore already sorted
	}
}

int main() {
	cout << "Linear Search through unsorted array" << endl;

	int arr[] = {34, 12, 10, 6, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	vector<int> sort_it(arr, arr+n); // start of array to end of array


	int key = 41;
	int position = findElement(arr, n, key);

//	if (position == -1)
//		cout << "Element " << key << " not found!" << endl;
//	else
//		cout << "Element found at position " << position+1 << endl;

	(position == -1) ? cout << key << " not found " : cout << key << " found ";
    cout << endl;

    // BubbleSort
	bubbleSort(sort_it);

	for (int i=0; i<sort_it.size();i++) {
		cout << sort_it[i] << " ";
	}
	cout << endl;

	cout << "Binary Search through a sorted array" << endl;
	cout << "The index is at " << binarySearch(sort_it, 40) << endl;

	return 0;
}
