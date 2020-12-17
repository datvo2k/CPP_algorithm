/*
An array is special if every even index contains an even number and every odd index contains an odd number. 
Create a function that returns true if an array is special, and false otherwise.

Ex:
isSpecialArray([2, 7, 4, 9, 6, 1, 6, 3]) ➞ true
// Even indices: [2, 4, 6, 6]; Odd indices: [7, 9, 1, 3]
isSpecialArray([2, 7, 9, 1, 6, 1, 6, 3]) ➞ false
// Index 2 has an odd number 9.
isSpecialArray([2, 7, 8, 8, 6, 1, 6, 3]) ➞ false
// Index 3 has an even number 8.
*/


#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <algorithm>    // std::max


bool maxSum(int arr[], int n, int k){ 
    // n must be greater 
    bool check = true;
    if (n < k){ 
        std::cout << "Invalid"; 
        return -1; 
    } 
  
    // Compute sum of first window of size k 
    int max_sum = 0; 
    for (int i = 0; i < k; i++) 
        max_sum += arr[i]; 

  
    // Compute sums of remaining windows by 
    // removing first element of previous 
    // window and adding last element of 
    // current window. 
    int window_sum = max_sum; 
    for (int i = k; i < n; i++){ 
        window_sum += arr[i] - arr[i - k];
        if(window_sum % 2 == 0)
        	check = false;
        
    } 
  
    return check; 
} 


int main(){
	int arr[] = {2, 7, 9, 1, 6, 1, 6, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	std::cout << maxSum(arr, n, k) << std::endl;

}