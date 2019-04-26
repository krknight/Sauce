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
 * 1) Depth-First Search (explore down each branch) Uses less memory because does not hold all the nodes
 * around the view node
 * USE IN GROWING TREES LIKE CHESS OPTIONS, WHERE YOU NEED TO BACKUP IF A MOVE LEADS TO YOUR OPPONENTS ADVANTAGE
 *                      1
 *                  2       5
 *                3   4   6   7
 *
 *                1-2-3-4-5-6-7 (pre-order traversal)
 *                3-2-4-1-6-5-7 (in-order traversal)
 *                3-4-2-6-7-5-1 (post-order traversal)
 *
 *                https://youtu.be/bIA8HEEUxZI
 *                Uses a STACK FIFO (GOES TO NEXT CONNECTED NODE (PUSH) UNTIL ALL VISITED THEN (POPS)
 *                UNTIL NODE WITH UNVISITED NODE FOUND AND REPEATS). This is digging down (depth).
 *                Create a Path array (visited)
 *                Create a stack
 *                Start at node A
 *                Push A onto the Stack(A) and add to Path(A)
 *                From A goto the next connected node with lowest alpha e.g. B
 *                Push A onto Stack(AB) and add B to Path(AB)
 *                From B goto the next connected node with lowest alpha e.g. E
 *                Keep updating the Path and pushing to the stack until all surrounding nodes have been visited
 *                Now pop from the stack until a node is reached with node/s connected that have not been visited
 *
 *
 * 2) Breadth-First Search (explores along neighbors, level by level and depth by depth) GRAPHING Euler
 * USE WHEN QUICKLY FINDING SHORTEST PATH BETWEEN NODES
 *                      1            level 0
 *                  2       5        level 1
 *                3   4   6   7      level 2
 *
 *                1-2-5-3-4-6-7 (BFS traversal)
 *
 *                https://youtu.be/bIA8HEEUxZI
 *                Uses a QUEUE FILO (VISITS EVERY NODE CONNECTED (PUSHES) THEN MOVES TO FIRST NODE VISITED
 *                (POPS) AND REPEATS). This is looking around (breadth)
 *                Create a Path array (visited)
 *                Create a queue
 *                Start at node A
 *                Visit all nodes around A in alphabetical order
 *                Path(A)
 *                Queue(B) Path(AB)
 *                Staying with A
 *                Queue(BD) Path(ABD)
 *                Staying with A
 *                Queue(BDG) Path(ABDG)
 *                All nodes around A have now been visited, so deque to find a node that has unvisited nodes connected
 *                Queue(DG) B is now the node from which we explore
 *
 *                See also the adjacency matrix (shows connection between nodes [1 or 0 is simplest])
 *                If weighted i.e. numbers greater than 1. Then this is used to as a edge with priority.
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
