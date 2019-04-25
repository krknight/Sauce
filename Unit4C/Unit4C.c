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
	int arrQSUnsorted[] = {64, 34, 25, 12, 22, 11, 60};
	int * arrQSSorted;

	int n = sizeof(arrBSUnsorted)/sizeof(arrBSUnsorted[0]);

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
		// i.e. FROM 64 34 25 12 22 11 60 TO 34 25 12 22 11 60 64 (all lower to left all higher to right)
		int pi = partition(arr, low, high); // 0 - 6 then 0 - 4

		// Separately sort elements before partition and after partition
		printf("\nquickSort start = %d, end = %d\n", low, pi-1);
		quickSort(arr, low, pi-1); // 0 - 4
		printf("\nquickSort start = %d, end = %d\n", pi+1, high);
		quickSort(arr, pi+1, high);

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

static int partition (int arr[], int low, int high) { // initially 0 - 6
	int pivot = arr[high]; // initially 60
	int i = (low - 1); // initially i = -1

	for (int j = low; j <= high-1; j++) { // initially 0 - 5 (the rest of the elements)
		////////////// FIRST PASS START
		// 64 34 25 12 22 11 60

		// j=0 64 <= 60 NO
		// j=1 34 <= 60 YES
		// j=2 25 <= 60 YES
		// j=3 12 <= 60 YES
		// j=4 22 <= 60 YES
		// j=5 11 <= 60 YES
		////////////// FIRST PASS END
		if (arr[j] <= pivot) {

			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
			////////////// FIRST PASS START
			// from 64 34 25 12 22 11 60 with j=1 i=0
			// to   34 64 25 12 22 11 60
			// from 34 64 25 12 22 11 60 with j=2 i=1
			// to   34 25 64 12 22 11 60
			// from 34 25 64 12 22 11 60 with j=3 i=2
			// to   34 25 12 64 22 11 60
			// from 34 25 12 64 22 11 60 with j=4 i=3
			// to   34 25 12 22 64 11 60
			// from 34 25 12 22 64 11 60 with j=5 i=4
			// to   34 25 12 22 11 64 60
			////////////// FIRST PASS END
		}
	}
	swap(&arr[i+1], &arr[high]);
	////////////// FIRST PASS START
	// to   34 25 12 22 11 60 64
	////////////// FIRST PASS END

	printf("\nPartition pass = ");
	printArray(arr, high+1);

	return (i+1);

}
