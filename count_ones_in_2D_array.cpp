/*
Create a function to count the number of 1s in a 2D array.

count_ones([
  [1, 0],
  [0, 0]
]) ➞ 1

count_ones([
  [1, 1, 1],
  [0, 0, 1],
  [1, 1, 1]
]) ➞ 7

count_ones([
  [1, 2, 3],
  [0, 2, 1],
  [5, 7, 33]
]) ➞ 2
*/


#include <stdio.h>
#include <iostream>


int count_ones(int arr[10][10], int rows, int cols){
	int num = 0;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(arr[i][j] == 1){
				num++;
			}
		}

	}

	return num;
}


int main(){
	int arr[10][10] = {
		{1 ,2, 3},
		{0, 2, 1},
		{5, 7, 33}
	};

	int rows =  sizeof arr / sizeof arr[0];   
  	int cols = sizeof arr[0] / sizeof(int);

  	std::cout << count_ones(arr, rows, cols) << std::endl;
}