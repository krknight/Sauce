//============================================================================
// Name        : STLlist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
using namespace std;

void showlist (list <int> g) {
	list <int> :: iterator it;  // this is how to declare an iterator, vector<int>::iterator ptr;
	for(it = g.begin(); it != g.end(); ++it) {
		cout << '\t' << *it;
	}
	cout << '\n';
}

int main() {
	list <int> gqlist1, gqlist2;

	for (int i = 0; i < 10; i++) {
		gqlist1.push_back(i*2);
		gqlist2.push_front(i*3);
	}

	cout << "gqlist1 is ";
	showlist(gqlist1);
	cout << "gqlist2 is ";
	showlist(gqlist2);

	cout << "\ngqlist1.front() : " << gqlist1.front();
	cout << "\nqqlist1.back() : " << gqlist1.back();

	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "\ngqlist1.pop_back() : ";
	gqlist1.pop_back();
	showlist(gqlist1);

	cout << "\ngqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "\ngqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}
