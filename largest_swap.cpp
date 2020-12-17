/*
Write a function that takes a two-digit number and determines if it's the largest of two possible digit swaps.

largestSwap(27) ➞ false
largestSwap(43) ➞ true

If 27 is our input, we should return false because swapping the digits gives us 72, and 72 > 27. On the other hand, swapping 43 gives us 34, and 43 > 34.

largestSwap(14) ➞ false
largestSwap(53) ➞ true
largestSwap(99) ➞ true
*/


#include <stdio.h>
#include <iostream>


int swapping_digits(int value){
	int reverse = 0; 
  
   while (value != 0) 
   { 
      reverse = reverse * 10; 
      reverse = reverse + value%10; 
      value       = value/10; 
   } 
  
   return reverse; 
}


bool largest_swap(int a, int b){
	bool check = true;
	if(a >= b)
		check = true;
	else
		check = false;

	return check;
}


int main(){
	int val = 53;
	std::cout << largest_swap(val, swapping_digits(val)) << std::endl;
	return 0;
}