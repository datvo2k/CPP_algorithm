/*
Create a function that takes an array of numbers between 1 and 10 (excluding one number) and returns the missing number.

missingNum([1, 2, 3, 4, 6, 7, 8, 9, 10]) ➞ 5
missingNum([7, 2, 3, 6, 5, 9, 1, 4, 8]) ➞ 10
missingNum([10, 5, 1, 2, 4, 6, 8, 3, 9]) ➞ 7
*/


#include<stdio.h>
 
 int getting_number(int arr[], int n){
 	int m = n + 1;

 	int total = m * (m + 1) / 2;
 	int sum = 0;
 	for(int i = 0; i < n; i++){
 		sum += arr[i];
 	}

 	return total - sum;
 }

 
 
int main(){
   
    int sample_arr[] = {10, 5, 1, 2, 4, 6, 8, 3, 9};
    int n = sizeof(sample_arr)/sizeof(sample_arr[0]);

    printf("The missing number is %d", getting_number(sample_arr, n), "\n");

    return 0;
}