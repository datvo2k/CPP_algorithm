/*
Create a function that takes an array of numbers and returns the mean (average) of all those numbers.

Examples
mean([1, 0, 4, 5, 2, 4, 1, 2, 3, 3, 3]) ➞ 2.55
mean([2, 3, 2, 3]) ➞ 2.50
mean([3, 3, 3, 3, 3]) ➞ 3.00
*/

#include <stdio.h>
#include <iostream>
#include <iomanip>      // std::setprecision


float round(float var) { 
    // 37.66666 * 100 =3766.66 
    // 3766.66 + .5 =3767.16    for rounding off value 
    // then type cast to int so value is 3767 
    // then divided by 100 so the value converted into 37.67 
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
} 


float divide(float a, float b){
    return a / b;
}


float mean(float *arr, int n){
	float total = 0;

	for(int i = 0; i < n; i++){
		total += arr[i];
	}

	std::cout << total << std::endl;
	float mean_ = divide(total, n);

	return round(mean_); 
}

int main(){
	float arr[] = {2, 3, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);

	std::cout << std::setprecision(3) << std::showpoint << mean(arr, n) << std::endl;
	return 0;
}