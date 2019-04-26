/*
 ============================================================================
 Name        : Unit4C.c
 Author      : Keith Knight
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printS(char []);
static void printArray(int [], int);
void swap(int *, int *);
int * bubbleSort(int [], int);
int * selectionSort(int [], int);
int * insertionSort(int [], int);
int * quickSort(int [], int, int);
static int mypartition(int [], int, int, int);
static int partition(int [], int, int);

int main(void) {

	char strBS[] = "\nBubble Sort";
	char strSS[] = "\n\nSelection Sort";
	char strIS[] = "\n\nInsertion Sort";
	char strQS[] = "\n\nQuick Sort";
	printS(strBS);

	int arrBSUnsorted[] = {64, 34, 25, 12, 22, 11, 90};
	int * arrBSSorted;
	int arrSSUnsorted[] = {64, 34, 25, 12, 22, 11, 80};
	int * arrSSSorted;
	int arrISUnsorted[] = {64, 34, 25, 12, 22, 11, 70};
	int * arrISSorted;
//	int arrQSUnsorted[] = {64, 34, 25, 12, 22, 11, 60};
	int arrQSUnsorted[] = {5,8,2,10,1,6};
	int * arrQSSorted;

//	int n = sizeof(arrBSUnsorted)/sizeof(arrBSUnsorted[0]);
	int n = sizeof(arrQSUnsorted)/sizeof(arrQSUnsorted[0]);

	// Bubble Sort
	printf("\nUnsorted = ");
	printArray(arrBSUnsorted, n);

	arrBSSorted = bubbleSort(arrBSUnsorted, n);
	printf("\nSorted = ");
	printArray(arrBSSorted, n);

	// Selection Sort
	printS(strSS);
	printf("\nUnsorted = ");
	printArray(arrSSUnsorted, n);

	arrSSSorted = selectionSort(arrSSUnsorted, n);
	printf("\nSorted = ");
	printArray(arrSSSorted, n);

	// Insertion Sort
	printS(strIS);
	printf("\nUnsorted = ");
	printArray(arrISUnsorted, n);

	arrISSorted = selectionSort(arrISUnsorted, n);
	printf("\nSorted = ");
	printArray(arrISSorted, n);

	// Quick Sort
	printS(strQS);
	printf("\nUnsorted = ");
	printArray(arrQSUnsorted, n);

	printf("\nquickSort start = 0, end = %d\n", n-1);
	arrQSSorted = quickSort(arrQSUnsorted,0, n-1);
	printf("\nSorted = ");
	printArray(arrQSSorted, n);

	return EXIT_SUCCESS;
}

void printS(char str[]) {
	printf("%s", str);
}

static void printArray(int arr[], int size) {
	for (int i=0;i<size;i++)
		printf("%d ", arr[i]);
}

void swap(int *higher, int *lower) {
	int temp = 0;

	temp = *higher;
	*higher = *lower;
	*lower = temp;
	return;
}

int * bubbleSort(int arr[], int last) { // Time complexity O(n)
	int i,j;
	char * swapped = "false\0";
	char f[] = "false\0";

	for(i=0;i<last-1;i++) { // to ensure all iterations are done to always be successful
		swapped = "false\0";
		for (j=0;j<last-1-i;j++) { // -i because the last i number of elements are always correct
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = "true\0";
			}
		}
		if (strcmp(f, swapped) == 0) {
//			printf("Swapped is %s ", swapped);
			break;
		}
	}
	return arr;
}

int * selectionSort(int arr[], int last) {  // Time complexity O(n^2)
	int i,j;

	for (i=0;i<last;i++) {
		for (j=i+1;j<last;j++) {
			if (arr[j] < arr[i]) {
				swap(&arr[j], &arr[i]);
			}
		}
	}

	return arr;
}

int * insertionSort(int arr[], int last) {  // Time complexity O(n*2)
	int i, key, j;

	for (i=1;i<last;i++) {

		key = arr[i];
		j = i - 1;
		/*
		 * Move elements of arr[0..i-1], that are greater than key, to one position
		 * ahead of their current position
		 */
		while (j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}

//	unsigned int a = 6;
//	int b = -10;
//	(a+b)>6 ? printf(" >6") : printf(" <6");
//	// expect -4 > 6 false therefore " <6" but get " >6"  because expressions promote all types to unsigned)
//    // ok when both are int

	return arr;
}

int * quickSort(int arr[], int low, int high) {  // Time complexity
	// low is the first index of the array
	// high is the last index in the array i.e. 7-1

//	int strtIdx = low, endIdx = high;
//	int pivotIdx = endIdx - 1;
//    for (int i = strtIdx; i < endIdx; i++) {
//    	mypartition(arr, strtIdx, pivotIdx, high); // my attempt at partitioning
//    	pivotIdx--;
//    }

	if (low < high) { // this should always be true
		// Set the array so that end element used for the partition is centered
		int pi = partition(arr, low, high); // FIRST pi = 3 low = 0 high = 5

		// Separately sort elements before partition and after partition
		printf("\nquickSort start = %d, end = %d\n", low, pi-1);
		quickSort(arr, low, pi-1); // SECOND pi = 3 low = 0 0-2
		printf("\nquickSort start = %d, end = %d\n", pi+1, high);
		quickSort(arr, pi+1, high); // THIRD pi = 3 high = 5  4-5

	}

	return arr;
}

/*
 * takes the last element as the pivot (i.e. for the first iteration that is going to be 60)
 * then places all smaller elements to the left of the pivot and all elements greater to the right
 * of the pivot
 */
static int mypartition (int arr[], int strtIdx, int pivotIdx, int last) { // 0, 7, 7

	int arrSize = last;
	printf("\n !!!pivotIdx = %d", pivotIdx);
	for (int i = strtIdx; i < arrSize; i++) {
		if (arr[i] < arr[pivotIdx]) {
			if (i<pivotIdx) {
				// The compared element is less than and already situated to the left of the pivot
				printf("\n< & L leave");
			} else {
				// The compared element is less than and situated to the right of the pivot
				// swap
				printf("\n< & R swap %d %d\n", arr[i], arr[pivotIdx]);
				swap(&arr[i], &arr[pivotIdx]); // swap the values
				pivotIdx = i; // let pivotIdx continue to point at the repositioned pivot value
				printArray(arr, arrSize);
			}
		}
		else if (arr[i] > arr[pivotIdx]) {
			if (i<pivotIdx) {
				// The compared element is greater than and situated to the left of the pivot
				// swap
				printf("\n> & L swap %d %d\n", arr[i], arr[pivotIdx]);
				swap(&arr[i], &arr[pivotIdx]); // swap the values
				pivotIdx = i; // let pivotIdx continue to point at the repositioned pivot value
				printArray(arr, arrSize);
			} else {
				// The compared element is greater than and situated to the right of the pivot
				printf("\n> & R leave");
			}
		}
		else if (arr[i] == arr[pivotIdx]) {
			// Nothing to do
		}
		else {
			// Nothing to do
		}
	}


	return pivotIdx;
}

static int partition (int arr[], int low, int high) { // FIRST 0-5 SECOND 0-2 THIRD 4-5
	int pivot = arr[high]; // initially   FIRST 1 SECOND 6 THIRD 10
	int i = (low - 1); // initially i = -1

	for (int j = low; j <= high-1; j++) { // FIRST 0-4 SECOND 0-2 THIRD 4-4
		////////////// FIRST
		// 5,8,2,10,1,6
		// 5<6 yes j=0 i=0
		// 8<6 no  j=1 i=0
		// 2<6 yes j=2 i=1
		// 10<6 no  j=3 i=1
		// 1<6 yes j=4 i=2
		////////////// SECOND
		// 5,2,1,6,8,10
		// 5<1 no j=0 i=-1
		// 2<1 no  j=1 i=-1

		if (arr[j] <= pivot) {

			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
			////////////// FIRST
			// from 5,8,2,10,1,6 j=0 i=0
			// to   5,8,2,10,1,6
			// from 5,8,2,10,1,6 j=2 i=1
			// to   5,2,8,10,1,6
			// from 5,2,8,10,1,6 j=4 i=2
			// to   5,2,1,10,8,6
			////////////// SECOND
		}
	}
	swap(&arr[i+1], &arr[high]);
	////////////// FIRST
	// from 5,2,1,10,8,6   swap [3]=10 & [5]=6
	// to   5,2,1,6,8,10
	////////////// SECOND
	// from 5,2,1,6,8,10   swap [0]=5 & [2]=1
	// to   1,2,5,6,8,10  SORTED!!

	printf("\nPartition pass = ");
	printArray(arr, high+1);

	return (i+1); //  FIRST 3 SECOND 0 THIRD 0

}
