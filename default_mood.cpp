/*
Create a function that takes in a current mood and return a sentence in the following format: "Today, I am feeling {mood}". 
However, if no argument is passed, return "Today, I am feeling neutral".

moodToday("happy") ➞ "Today, I am feeling happy"
moodToday("sad") ➞ "Today, I am feeling sad"
moodToday() ➞ "Today, I am feeling neutral"
*/


#include <iostream>
#include <stdio.h>
#include <string.h>


void mood_today(const char *a){

	if((a != NULL) && (a[0] == '\0'))
		std::cout << "Today, I am feeling neutral" << std::endl;

	else
		std::cout << "Today, I am feeling " << a << std::endl;
	
	return;
}


int main(){
	char a[] = "";
	mood_today(a);
	return 0;
}

