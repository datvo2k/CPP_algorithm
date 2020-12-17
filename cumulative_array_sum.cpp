/*
Create a function that takes an array of numbers and returns an array where each number is the sum of itself + all previous numbers in the array.

cumulativeSum([1, 2, 3]) ➞ [1, 3, 6]
cumulativeSum([1, -2, 3]) ➞ [1, -1, 2]
cumulativeSum([3, 3, -2, 408, 3, 3]) ➞ [3, 6, 4, 412, 415, 418]
*/


#include <stdio.h>
#include <iostream>
#include <vector>

std::vector <int> new_arr;
int cumulative_sum(int arr[], int n){
	int sum = 0;

	for(int i = 0; i < n; i++){
		sum += arr[i];
		new_arr.push_back(sum);
	}
	
	return 0;
}


void print(std::vector<int> const &input)
{
	for (auto const& i: input) {
		std::cout << i << " ";
	}
}


int main(){
	int arr[] = {3, 3, -2, 408, 3, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cumulative_sum(arr, n);
	// std::cout << n << std::endl;
	print(new_arr);

	return 0;
}