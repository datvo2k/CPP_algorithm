
/*
Create a function that takes a vector of vectors as an argument. Each inner vector has 2 elements. 
The first element is the numerator and the second element is the denominator. Return the sum of the fractions rounded to the nearest whole number.

Examples
sum_fractions({{18, 13}, {4, 5}}) ➞ 2
sum_fractions({{36, 4}, {22, 60}}) ➞ 9
sum_fractions({{11, 2}, {3, 4}, {5, 4}, {21, 11}, {12, 6}}) ➞ 11
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;


void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}


float sum_fractions(vector<vector<float>> v){
	vector<float> temp;	// create array
	float sum = 0;
	if(v.size() == 2){
		sum = (float(v[0][0] / v[0][1]) + float(v[1][0] / v[1][1]));
		return int(sum);
	}

	else{
		for(int i = 0; i < v.size(); i++){
			for (int j = 0; j < v[i].size(); j++){
         		temp.push_back(v[i][j]);
          	}
		}

		for(int i = 0; i < temp.size(); i = i + 2){
			sum += float(temp[i] / temp[i+1]);
		}

		return int(sum);
	}
}


int main(){
	vector<vector<float>> vect{{11, 2}, {3, 4}, {5, 4}, {21, 11}, {12, 6}}; 
	
	cout << sum_fractions(vect) << endl;
	return 0;
}
