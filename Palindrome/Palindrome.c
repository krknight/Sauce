/*
 ============================================================================
 Name        : Palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Identify a palindrome
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NBR_OF_BITS_PER_BYTE 8

// simple case 010 0110, therefore only odd number of bits requires stopping the compare before the middle.

int main(void) {
	unsigned short candidate = 0x1188; // bits 15 -> 0 (15,14,13,12,11,10,9,8) (7,6,5,4,3,2,1,0)
    unsigned short lowmask = 0;
    unsigned short highmask = 0;
    unsigned short lowbit = 0;
    unsigned short highbit = 0;

	int i=0,j=0;
	unsigned char palindrome = 1; // 0 = false, 1 = true

	puts("Palindrome test");

    // compare bits from front to back working to the center.
	/*
	 * A B NAND
	 * 0 0 1
	 * 0 1 0
	 * 1 0 0
	 * 1 1 1
	 */
	// If they are all the same then this is a palindrome

	j = sizeof(candidate) * NBR_OF_BITS_PER_BYTE;
	for (i=0; i<((sizeof(candidate) * NBR_OF_BITS_PER_BYTE)/2); i++) {
		j--;
//		printf("i = %d\n", i);
//		printf("j = %d\n", j);

		highmask = 1 << j;
		lowmask = 1 << i;
		highbit = candidate & highmask;
//		printf("highbit = %x\n", highbit);
		lowbit = (candidate & lowmask) << (j-i);
//		printf("lowbit = %x\n", lowbit);

		if (lowbit != highbit) {
		    palindrome = 0; // not a palindrome, at least one comparison not the same
		}

//		printf("highmask = %x\n", highmask);
//		printf("lowmask = %x\n", lowmask);

	}

	if (!palindrome) {
		printf("%x is not a palindrome", candidate);
	} else {
		printf("%x is a palindrome", candidate);
	}

	return EXIT_SUCCESS;
}
