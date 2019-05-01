//============================================================================
// Name        : OverloadedOperator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class number {
public:
	int x;
	int y;

	number() {
		int x = 0;
		int y = 0;
	}

	number(int j, int k) {
		x = j;
		y = k;
	}
/*
 * C=A+B is number operator (A) + number D (B)
 */
	number operator + (number D) { // (D.x, D.y)
		cout << "\n D.x = " << D.x << endl; // 4
		cout << " D.y = " << D.y << endl; // 5
		cout << " x = " << x << endl; // 2
		cout << " y = " << y << endl; // 3
		number T;
		T.x = x+D.x;
		T.y = y+D.y;
		cout << " T.x = " << T.x << endl;
		cout << " T.y = " << T.y << endl;
		return T; // (T.x, T.y)
	}

	void show () {
		cout << "\n x = " << x << " y = " << y << endl;
	}
};

int main() {
	number A(2,3), B(4,5), C;
	A.show();
	B.show();
	C=A+B; // overloaded operator +
	C.show();
	return 0;
}
