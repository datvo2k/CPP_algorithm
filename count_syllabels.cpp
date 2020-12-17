/*
Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.

numberSyllables("buf-fet") ➞ 2
numberSyllables("beau-ti-ful") ➞ 3
numberSyllables("mon-u-men-tal") ➞ 4
numberSyllables("on-o-mat-o-poe-ia") ➞ 6
*/

#include <iostream>
#include <string.h>


int count_words(char *str){
	int num = 0;
	
	for(int i = 0; i <= str[i] != '\0'; i++){
		if(str[i] == '-'){
			num++;
		}
	}
	return num + 1;
}


int main(){
	char str[] = "on-o-mat-o-poe-ia";
 	std::cout << count_words(str) << std::endl;
 	return 0;
}