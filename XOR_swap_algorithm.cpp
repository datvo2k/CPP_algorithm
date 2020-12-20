/*
This is more informational than a challenge. You can actually switch 2 variables with the XOR operation ^. XOR works with two arguments. 
It turns both arguments in their binary representation, and for each bit, returns 1 if they are different, 0 otherwise.
The return value is the decimal representation of the new binary string. 
So, if you don't know how to do it, go play around with it! After some time on paper, you will understand what is going on, and how it works.

Your job is to switch 2 variables using the XOR operator, which means your return statement should be return std::make_pair(a, b), but the variables need to be switched.

Examples
XOR(10, 41) ➞ (41, 10)
XOR(69, 420) ➞ (420, 69)
XOR(12345, 890412) ➞ (890412, 12345)
*/

#include <stdio.h>
#include <iostream>

void XOR(int *x, int *y){
	/*
	 1. x = x ^ y
                      00001100
                    ^ 00000111
                    ----------
                      00001011    the current value of a
    2. y = x ^ y
                      00001011
                    ^ 00000111
                    ----------
                      00001100    the current value of b
    3. x = x ^ y
                      00001011
                    ^ 00001100
                    ----------
                      00000111    the current value of a
	*/	
	if(x != y){
		*x ^= *y;	
		*y ^= *x;
		*x ^= *y;

	}
}

int main(){
	int x = 890412;
	int y = 12345;
	XOR(&x, &y);
	std::cout << x << " " << y << std::endl; 
	return 0;
}