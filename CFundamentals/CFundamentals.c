/*
 ============================================================================
 Name        : CFundamentals.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
#include "search.h"

#define MAX 50

extern int x; // tell linker that is will find this variable declared in another file.c

int main(void) {

	/*
	 * Search, Insert and Delete in a sorted array
	 */

	/*
	 * Delete
	 * Delete 30 from 10,20,30,40,50
	 */

	int i;
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 30;

	printf("\nArray before deletion\n");
	for(i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
	n = DeleteElement(arr, n, key);
	printf("\nArray after deletion\n");
	for(i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}

	/*
	 * Insert
	 * Add 3 to 1,2,4,5,6 making new array 1,2,3,4,5,6
	 */

//	int arr[20] = {12,16,20,40,50,70};
//	int capacity = sizeof(arr)/sizeof(arr[0]); // (20x4)/4 = 20
//	int n = 6;
//	int i, key = 26;
//
//	printf("\nBefore Insertion\n");
//	for (i=0; i<n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	n = InsertSorted(arr, n, key, capacity);
//	printf("\nAfter Insertion\n");
//	for (i=0; i<n; i++) {
//		printf("%d ", arr[i]);
//	}

//	/*
//	 * Search
//	 * Find 3 in 1,2,3,4,5,6 by divide and conquer 'Binary Search'
//	 */
//
//	int arr[] = {5,6,7,8,9,10};
//	int n, key;
//
//	n = sizeof(arr)/sizeof(arr[0]); // number of items in array
////	printf("arr size = %lu\n", sizeof(arr)); // 24
////	printf("arr[0] size = %lu\n", sizeof(arr[0])); // 4
//	key = 10;
//
//	printf("\nIndex: %d\n", BinarySearch(arr,0,n,key));


	/*
	 * Pointer, extern and static examples
	 */
//	int a = 1;
//	int i = 9;
//	int j = 10;
//	int k = 11;
//	int *ptr = &a; // ptr can change, value pointed to can change
//	const int *ptr_to_const = &i; // ptr can change, value pointed to can't change
//	int *const ptr_is_const = &j; // ptr can't change, value pointed to can change
//	const int *const ptr_is_const_ptr_to_const = &k; // ptr can't change, value pointed to can't change
//
//	ptr_to_const = &j;
//	printf("The value of j is %d,", *ptr_to_const); // ptr_to_const can't change the value of j
//	ptr = &j; // ptr can change the value of j
//	*ptr = 100;
//	printf("\nThe new value of j is %d", *ptr_to_const);
//	printf("\nThe new value of j is %d", *ptr_is_const);
//	printf("\nThe value of k is %d", *ptr_is_const_ptr_to_const);
//	saySomething();
//	saySomething();
//	saySomething();
//	printf("\nThe value of x declared in constants.c is %d", x);
//	printf("\nThe value of z declared in constants.h is %d", z);
////	ptr_is_const_ptr_to_const = &i; // error
////	*ptr_is_const_ptr_to_const = 11; // error

	/*
	 * Input output examples
	 */
//	int num;
//	char ch;
//	float f;
//	unsigned long long int ulli;
//	char str[MAX];

//	puts("Fundamental C ");

//	printf("\n\nEnter the char: ");
//	scanf("%c", &ch);
//	printf("\nEntered char is: %c", ch);
//
//	printf("\n\nEnter the integer: ");
//	scanf("%d", &num);
//	printf("\nEntered integer is: %d", num);
//
//	printf("\n\nEnter the float: ");
//	scanf("%f", &f);
//	printf("\nEntered float is: %f", f);

//	printf("\nEnter the Word: ");
//	scanf("%s", &str);
//	printf("\n\nEntered word is: %s", str);

//	printf("\n\nEnter the sentence: ");
////	scanf("%[^\n]s", str); // ^\n tells scanf to read everything until \n is encountered.
//	fgets(str,50,stdin);
//	printf("\nEntered sentence is: %s", str);
//	ulli = 3;
//	printf("\n\nThe size of unsigned long long int is: %llu", sizeof(unsigned long long int));

	return EXIT_SUCCESS;
}
