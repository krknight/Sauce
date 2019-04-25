/*
 * Node.h
 *
 *  Created on: Apr 25, 2019
 *      Author: kknight
 */

#ifndef NODE_H_
#define NODE_H_

#include<string>
using namespace std;

class Node {
public:
	Node(string);
	virtual ~Node();

	string m_name;
	Node * m_leftchild;
	Node * m_rightchild;

};

#endif /* NODE_H_ */
