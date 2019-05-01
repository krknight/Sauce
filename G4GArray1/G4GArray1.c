/*
 ============================================================================
 Name        : G4GArray1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TESTCASE_MAX 100
#define TESTCASE_MIN 1
#define ARRAY_SIZE_MAX 1000  // 1E7 10M  int = 32 bit 2pwr32 = 4E9 = 4G
#define ARRAY_SIZE_MIN 1

static int factorial(int);

// the array element is unsigned and is <= 10power10 = 1E10 = 10000000000 = 10G
// 64bit is 2pwr64 = 1.8E19 10exa

int main(void) {
	int testcases;
	int array_size;
	int arr[ARRAY_SIZE_MAX];
	int sum;
	int i=0;
	int subarr_sum = 0;
	int substridx = 0;
	int iterations = 0;

	puts("G4G Array Test 1");
//	printf("Array size max = %ud", ARRAY_SIZE_MAX);

	printf("Enter the number of test cases:-\n");
	scanf("%d", &testcases);
	printf("the number of testcases is %d\n", testcases);

	if (testcases > TESTCASE_MAX || testcases < TESTCASE_MIN) {
		printf("testcases must be between %d and %d\n", TESTCASE_MAX, TESTCASE_MIN);
		exit(0);
	}

	printf("Enter array size:-\n");
	scanf("%d\n", &array_size);
	printf("The array size is %d\n", array_size);
//	printf("The factorial of array_size %d is %d\n", array_size, factorial(array_size));
	printf("Enter sub array sum:-\n");
	scanf("%d\n", &sum);
	printf("The sub array sum is %d\n", sum);
	printf ("Enter %d array values, return after each value entered:-\n", array_size);
	for (i=0;i<array_size;i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nThe entered array is:-\n");
	for (i=0; i< array_size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

    /*
     * Find sum inside of array starting from left i.e. arr[0]
     */

	substridx = 0;
	subarr_sum = 0;
	i=0;

	while (substridx < array_size) {
		subarr_sum += arr[i];
//		printf("arr[i] = %d\n", arr[i]);
//		printf("subarr_sum = %d\n", subarr_sum);
//		printf("i = %d\n", i);
//		printf("substridx = %d\n", substridx);
		if (subarr_sum == sum) {
			printf("Found sum in subarray!\n");
			break;
		} else if (subarr_sum > sum) {
			substridx++;
			i = substridx;
			subarr_sum = 0; // reset
		} else if (subarr_sum < sum){
			i++;
		} else {
			printf("Something went wrong with values!");
			break;
		}
		if (++iterations > factorial(array_size)) {
			printf("Something went wrong with iterations!");
			break;
		}

	}

	printf("The substring that adds to %d, starts at %d and ends at %d\n", sum, substridx+1, i+1);

//	printf("EXIT_SUCCESS\n");
	return EXIT_SUCCESS;
}

static int factorial (int nbr) {
//	printf("number = %d\n", nbr);
	int factorial=1;
	for (int i=nbr;i>=1;i--) {
		factorial*=i;
//		printf("i = %d\n", i);
//		printf("factorial = %d\n", factorial);

	}
	return factorial;
}
