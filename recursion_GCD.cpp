/*
Write a function that calculates the GCD (Greatest Common Divisor) of two numbers recursively.

Examples
gcd(10, 20) ➞ 10
gcd(1, 3) ➞ 1
gcd(5, 7) ➞ 1
gcd(2, 6) ➞ 2
*/

#include <iostream>
#include <stdio.h>


int gcd(int a, int b){
	if(a == 0)
		return b;
	if(b == 0)
		return 0;
	if(a == b)
		return a;

	if(a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int main(){
	int a = 2;
	int b = 6;
	std::cout << gcd(a, b) << std::endl;
	return 0;
}