/*
Create a function that takes an array of numbers and return its median.
If the input array is even length, take the average of the two medians, else, take the single median.

Ex:
median([2, 5, 6, 2, 6, 3, 4]) ➞ 4
median([21.4323, 432.54, 432.3, 542.4567]) ➞ 432.4
median([-23, -43, -29, -53, -67]) ➞ -43
*/


#include <stdio.h>
#include <iostream>


float median(float *arr, int n){
	float num = 0;
	float medium = 0;
	for(int i = 0; i <= n; i++){
		num += arr[i];
	}

	if(n % 2 == 0)
		medium = (arr[1] + arr[2]) / 2;
	
	else
		medium = num / n;
	return medium;
}


int main(){
	float arr[] = {21.4323, 432.54, 432.3, 542.4567};
	int n = sizeof(arr)/sizeof(arr[0]);
	std::cout << median(arr, n) << " ";
	return 0;
}