/*
A number n is automorphic if n^2 ends in n.
For example: n=5, n^2=25
Create a function that takes a number and returns true if the number is automorphic, false if it isn't.

Examples
isAutomorphic(5) ➞ true
isAutomorphic(8) ➞ false
isAutomorphic(76) ➞ true
*/

#include <iostream>
#include <stdio.h>
#include <math.h>


int last_digit(int n){
	return (n % 10);
}


bool automorphic_numbers(int number){

	int x = number * number;
	std::cout << x << std::endl;
	if(number > 9){
		int digit = last_digit(number);
		if(last_digit(x) != digit){
			return false;
		}

		else{
			return true;
		}
	}

	else{
		if(last_digit(x) != number){
			return false;
		}

		else{
			return true;
		}
	}

}


int main(){
	int number = 76;
	std::cout << automorphic_numbers(number) << std::endl;
	return 0;
}