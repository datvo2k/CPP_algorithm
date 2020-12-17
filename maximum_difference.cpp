/*
Given an array of integers, return the difference between the largest and 
smallest integers in the array.

Ex:
difference([10, 15, 20, 2, 10, 6]) ➞ 18
# 20 - 2 = 18
difference([-3, 4, -9, -1, -2, 15]) ➞ 24
# 15 - (-9) = 24
difference([4, 17, 12, 2, 10, 2]) ➞ 15
*/


#include <stdio.h>
#include <iostream>


void swap(int &a, int &b){
	int t = a; 
	a = b;
	b = t;
}


int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int left = low;
	int right = high - 1;
	while(true){
		while(left <= right && arr[left] < pivot) left++;
		while(right >= left && arr[right] > pivot) right--;

		if(left >= right) break;
		swap(arr[left], arr[high]);
		left++;
		right--;
	}

	swap(arr[left], arr[high]);
	return left;

}


void quick_sort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr, low, high);

		quick_sort(arr, low, pi - 1);
		quick_sort(arr, pi + 1, high);
	}
}


int main(){
	int arr[] = {4, 17, 12, 2, 10, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, n-1);
    std::cout << arr[n-1] - arr[0]<< std::endl;
    return 0;
}