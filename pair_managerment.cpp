/*
Given a pair, return its FIRST value and its SECOND value. Pair will be < int, int >.

pairs(std::make_pair(1, 2)) ➞ { 1, 2 }
pairs(std::make_pair(51, 21)) ➞ { 51, 21 }
pairs(std::make_pair(512124, 215)) ➞ { 512124, 215 }
*/


#include <iostream>
#include <utility>	// std::pair
#include <stdio.h>


int main () {
  	std::pair <int,int> foo;
  	foo = std::make_pair (51, 12);
	
	std::cout << "{" << foo.first << ", " << foo.second << '}' << std::endl;
  	return 0;
}

