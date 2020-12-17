/*
Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).

isSafeBridge("####") ➞ true
isSafeBridge("## ####") ➞ false
isSafeBridge("#") ➞ true
*/


#include <iostream>
#include <string.h>


bool check_bridge(char *str){
	bool check = true;
	for(int i = 0; i <= str[i] != '\0'; i++){
		if(str[i] == ' '){
			check = false;
		}
	}
	return check;
}


int main(){
	char str[] = "####";
 	std::cout << check_bridge(str) << std::endl;
 	return 0;
}