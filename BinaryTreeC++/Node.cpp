/*
 * Node.cpp
 *
 *  Created on: Apr 25, 2019
 *      Author: kknight
 */

#include "Node.h"

Node::Node(string name) {
	m_name = name;
	m_rightchild = NULL;
	m_leftchild = NULL;

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

