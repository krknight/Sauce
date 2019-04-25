//============================================================================
// Name        : BinaryTreeC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Node.h"

/*
 * A Binary Tree is a tree data structure in which each node has at the most two children.
 */


/*
 * There are 2 types of tree traversal
 * 1) Depth-First Search (explore down each branch)
 *                      1
 *                  2       5
 *                3   4   6   7
 *
 *                1-2-3-4-5-6-7 (pre-order traversal)
 *                3-2-4-1-6-5-7 (in-order traversal)
 *                3-4-2-6-7-5-1 (post-order traversal)
 *
 * 2) Breadth-First Search (explores along neighbors, level by level and depth by depth)
 *                      1            level 0
 *                  2       5        level 1
 *                3   4   6   7      level 2
 *
 *                1-2-5-3-4-6-7 (BFS traversal)
 *
 *  To implement a BFS algorithm we use a queue data structure
 *  Queue
 *  <-- put 1
 *  | 1 |   |   |   | then Print 1 and --> pull 1 and <-- put 2,5
 *  | 2 | 5 |   |   | then Print 2 and --> pull 2 and <-- put 3,4
 *  | 5 | 3 | 4 |   | then Print 5 and --> pull 5 and <-- put 6,7
 *  | 3 | 4 | 6 | 7 | then Print 3 and --> pull 3
 *  | 4 | 6 | 7 |   | then Print 4 and --> pull 4
 *  | 6 | 7 |   |   | then Print 6 and --> pull 6
 *  | 7 |   |   |   | then Print 7 and --> pull 7
 *  |   |   |   |   |
 */

/*
 * Binary Search Tree (ordered or sorted binary tree)
 *
 * node value > node left child value
 * node value < node right child value
 */

using namespace std;

int main() {

	Node * root = new Node("root");
	Node * node1L = new Node("leftrootchild");
	Node * node1R = new Node("rightrootchild");

	root->m_leftchild = node1L;
	root->m_rightchild = node1R;

	cout << "The left child's name is " << root->m_leftchild->m_name << endl;

	if (root != NULL) {
		cout << "deleting root" << endl;
		delete root;
	}
	if (node1L != NULL) {
		cout << "deleting node1L" << endl;
		delete node1L;
	}
	if (node1R != NULL) {
		cout << "deleting node1R" << endl;
		delete node1R;
	}

	return 0;
}
