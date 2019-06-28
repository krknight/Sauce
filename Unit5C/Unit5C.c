/*
 ============================================================================
 Name        : Unit5C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	const int number = 4;
	const int * const ptr = &number;
	printf("const ptr contains const value %d", *ptr);

	struct node {
		char data1;
		int data2;
		struct node * prev;
		struct node * next;
	};

	typedef struct optional_tag {
		int data3;
	} ts1;

	ts1 structn;
	structn.data3 = 4;

	typedef struct optional_tag structm;
	structm newtype;

	printf("\ntypedef struct test, the value is %d", structn.data3);

    struct node ob1;
    struct node ob2;
    struct node ob3;
    struct node *ob4;
    typedef struct node *ob5;

    ob1.data1 = 'a';
    ob1.data2 = 1;
    ob1.prev = &ob1;
    ob1.next = &ob2;
    ob2.data1 = 'b';
    ob2.data2 = 2;
    ob2.prev = &ob1;
    ob2.next = &ob3;
    ob3.data1 = 'c';
    ob3.data2 = 3;
    ob3.prev = &ob2;
    ob3.next = NULL;
    ob4 = &ob1;
    ob4->data1 = 's';

    ob5 ob = ob4;
    ob->data2 = 5;

    printf("\nob1 data is %c%d", ob1.data1, ob1.data2);
    printf("\nob2 data is %c%d", ob2.data1, ob2.data2);

    printf("\nob2.prev->data = %c%d", ob2.prev->data1, ob2.prev->data2);
    printf("\nob1.next->next->data = %c%d", ob1.next->next->data1, ob1.next->next->data2);

	return EXIT_SUCCESS;
}
