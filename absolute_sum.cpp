/*
Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.
ex:
	getAbsSum([2, -1, 4, 8, 10]) ➞ 25
	getAbsSum([-3, -4, -10, -2, -3]) ➞ 22
	getAbsSum([2, 4, 6, 8, 10]) ➞ 30
	getAbsSum([-1]) ➞ 1
*/

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <valarray>     // std::valarray, std::abs(valarray)


int max_sum(int a[], int n){
	std::valarray<int> foo (a, n);
	std::valarray<int> bar = abs(foo);

	for(std::size_t i = 0; i < bar.size(); ++i){
		std::cout << ' ' << bar[i];
	}
	std::cout << '\n';

	std::cout << "sum array" << std::endl;
	int sum = 0;
	for(int i = 0; i <= n - 1; i++){
		sum += bar[i];
	}
	return sum;
}


 int main(){
 	int arr[] = {2, 4, 6, 8, 10};
 	int n = sizeof(arr) / sizeof(arr[0]);

 	std::cout << max_sum(arr, n) << std::endl;
 	return 0;
 }