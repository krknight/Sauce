//============================================================================
// Name        : Graphing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
//============================================================================

/*
 * Graph traversal means visiting every vertex and edge exactly once in a well-defined order.
 * The order in which the vertices are visited are important and may depend upon the algorithm
 * or question being solved.
 *
 * Breadth First Search (BFS) is the most commonly used approach.
 */

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> v[10]; // vector for maintaining adjacency list
int level[10];     // to determine the level of each node
bool vis[10];      // mark the node if visited

void bfs(int);  // time complexity is )(V+E) V=number of nodes and E=number of edges
/*
 * Determines the level of each node in the given tree s
 */
void bfs(int s) {
	queue<int> q;
	q.push(s);  // add to queue
	level[s] = 0; // setting the level of the source node as 0
	vis[s] = true;

	while(!q.empty())
	{
		int p = q.front(); // get value
		q.pop(); // remove from q
		for (int i=0; i < v[p].size(); i++) {
			if(vis[ v[p][i] ] == false) {
				// setting the level of each node with an increment in the level of the parent node
				level[ v[p][i] ] = level[p]+1;
				q.push(v[p][i]);
				vis[ v[p][i] ] = true;
			}
		}
	}
}

int main() {
int s = 10;
	bfs(s);
	return 0;
}

