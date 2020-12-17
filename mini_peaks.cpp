/*
Write a function that returns all the elements in an array that are strictly 
greater than their adjacent left and right neighbors.

Ex:
miniPeaks([4, 5, 2, 1, 4, 9, 7, 2]) ➞ [5, 9]
// 5 has neighbours 4 and 2, both are less than 5.
miniPeaks([1, 2, 1, 1, 3, 2, 5, 4, 4]) ➞ [2, 3, 5]
miniPeaks([1, 2, 3, 4, 5, 6]) ➞ []
*/


#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


std::vector<int> num;

void mini_peaks(int *arr, int n){
	
	for(int i = 1; i <= n; i++){
		if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			num.push_back(arr[i]);
	}

	return;

}


void print(std::vector<int> const &input){
	std::copy(input.begin(), input.end(),
		std::ostream_iterator<int>(std::cout, " "));
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	mini_peaks(arr, n);
    print(num);
    return 0;
}