/*
 ============================================================================
 Name        : BinaryTreeC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Binary Tree implementation in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node { // typedef and nS1 serve the same purpose as typedef struct node nS2 below
	char name[20];
	struct node * left_child;
	struct node * right_child;
} nS1;

typedef struct node nS2;

int main(void) {

	char * nameR = "root\0";
	char * nameLR = "leftrootchild\0";
	char * nameRR = "rightrootchild\0";

	nS1 root;
	nS2 node1L;
	struct node node1R;

    strcpy(root.name, nameR);
	root.left_child = &node1L;
	root.right_child = &node1R;

    strcpy(node1L.name, nameLR);
	node1L.left_child = NULL;
	node1L.right_child = NULL;

    strcpy(node1R.name, nameRR);
	node1R.left_child = NULL;
	node1R.right_child = NULL;

	printf("\nThe right child is %s\n", root.right_child->name);

	return EXIT_SUCCESS;
}
