/*
Given two integers as arguments, create a function that finds the largest prime within the range of the two integers.

Examples
fatPrime(2, 10) ➞ 7
// range [2, 3, 4, 5, 6, 7, 8, 9, 10] and the largest prime is 7.
fatPrime(10, 2) ➞ 7
// [10, 9, 8, 7, 6, 5, 4, 3, 2] and the largest prime is 7.
fatPrime(4, 24) ➞ 23
// range [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24] the largest prime is 23.
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;


int fatPrime(int a, int b){
	int arr[30] = {};
	int index = 0;
	for(int i = a; i <= b; i++){
		arr[index++] = i;
	}

	for (const auto& e : arr) {
    cout << e << " ";
	}

	cout << endl;

	int n = sizeof(arr) / sizeof(arr[0]);
	int max_val = *max_element(arr, arr + n);	// find maximum value in the array
	vector<bool> prime(max_val + 1, true); 

	prime[0] = false;
	prime[1] = false;

	for(int p = 2; p * p <= max_val; p++){
		if(prime[p] == true){
			for(int i = p * 2; i <= max_val; i += p){
				prime[i] = false;
			}
		}
	}

	int maximum = -1; 
	for(int i = 0; i < n; i++){
		if(prime[arr[i]]){
			maximum = max(maximum, arr[i]);
		}

	}
	return maximum;
}


int main(){
	cout << fatPrime(4, 24) << endl;
	return 0;
}