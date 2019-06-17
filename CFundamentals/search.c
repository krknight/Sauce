/*
 * search.c
 *
 *  Created on: Apr 14, 2019
 *      Author: keithknight
 */

// O(Log n) - using Binary Search
int BinarySearch(int sorted_arr[], int start, int end, int search_value) {
    int mid = 0;

	if (start > end) {
		return -1; // normal exit, did not find searched value in the sorted array
	}

	// Step through until key found - non binary search
//	for (int i = start; i < end; i++) { // when search_value is 10, this routine take 5 iterations
//		if (sorted_arr[i] == search_value) {
//			return i;
//		}
//	}

	// Divide and conquer 'Binary Search', this routine takes 2 iterations
	mid = (start + end) / 2;
	printf("\nstart = %d mid = %d end = %d arr[mid] = %d value = %d", start, mid, end, sorted_arr[mid], search_value);

	if (search_value == sorted_arr[mid]) {
		printf("\nBinary Search(): Found search value at index %d", mid);
		return mid; // normal exit, found searched value in the sorted array
	}
	if (search_value > sorted_arr[mid]) { // the key could be in the upper indexes of the array, but not the lower
		start = mid + 1; // check (mid + 1) to end
		BinarySearch(sorted_arr, start, end, search_value);
	}
	if (search_value < sorted_arr[mid]) {
		end = mid - 1; // check start to (mid - 1)
		BinarySearch(sorted_arr, start, mid, search_value);
	}

	return mid; // this will be the last call (one before match) because of the recursion
}

// O(n) - in worse case all elements have to be moved
int InsertSorted(int sorted_arr[], int last, int insert_value, int capacity) {

	int i = 0;
	if (last > capacity) {
		return -1;
	}

	for (i=0;i<last;i++) {
		if (insert_value == sorted_arr[i] ) {
			// INSERT at i
			printf("\ninsert_value %d == sorted_arr[%d]", insert_value, i);

		}
		if ((insert_value > sorted_arr[i]) && (insert_value == sorted_arr[i+1])) {
			// INSERT at i+1
			printf("\ninsert_value %d > sorted_arr[%d] and == sorted_arr[%d]", insert_value, i, i+1);

		}
		if ((insert_value > sorted_arr[i]) && (insert_value < sorted_arr[i+1])) {
			// INSERT at i+1
			printf("\ninsert_value %d > sorted_arr[%d] and < sorted_arr[%d]", insert_value, i, i+1);

		}
	}

	// checking from the end is more efficient
	// {12,16,20,40,50,70}
	for (i=last-1;(i>=0 && sorted_arr[i] > insert_value);i--) { // exit when arr[i] is less than value
			sorted_arr[i+1] = sorted_arr[i];
	}
	// {12,16,20,40,40,50,70}
	sorted_arr[i+1] = insert_value;
	// {12,16,20,26,40,50,70}

	return (last+1);
}

// O(n) - in worse case all elements have to be moved
int DeleteElement(int sorted_arr[], int last, int delete_value) {

	// Find position of elememt to be deleted
	int pos = BinarySearch(sorted_arr, 0, last, delete_value);
	if (pos == -1) {
		printf("Delete Element(): Element not found!");
	} else {
		printf("\nDelete Element(): delete_value %d was found at index %d", delete_value, pos);
		// Delete Element
		for (int i=pos;i<last;i++) {
			sorted_arr[i] = sorted_arr[i+1];
		}
		last-=1;
	}


	return last;
}
