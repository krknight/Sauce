/*
 * constants.c
 *
 *  Created on: Apr 13, 2019
 *      Author: keithknight
 */

int x = 24;
static int y = 25;
static void saySomethingToMe(int var1) { // static make a function private to this file
	printf("\nThe value of y is %d and the value of static var1 is %d", y, var1);
}

void saySomething() {
	static int var1 = 0;
	var1++;
	saySomethingToMe(var1);
}


