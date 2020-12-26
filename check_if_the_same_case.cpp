/*
Create a function that returns true if an input string contains only
uppercase or only lowercase letters.

Examples
sameCase("hello") ➞ true
sameCase("HELLO") ➞ true
sameCase("Hello") ➞ false
sameCase("ketcHUp") ➞ false
*/

#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <cstring> 
#include <algorithm>
#include <functional>

using namespace std;

bool same_case(string& str){
	if(all_of(str.begin(), str.end(), &::islower))
		return true;
	else if(all_of(str.begin(), str.end(), &::isupper))
		return true;
	else
		return false;
}


int main(){
	string str = "ketcHUp";
	cout << same_case(str) << endl;
	return 0;
}

