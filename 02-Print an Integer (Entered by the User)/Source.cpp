//2. C++ Program to Print an Integer (Entered by the User)

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>


int main(void) {
	int inputValue;

	printf_s("Please type in a whole number and press enter: ");//Prints out the text in within the "" marks
	scanf_s("%d", &inputValue);//Reads user input and sets inputValue varible to it, if it's a integer

	printf_s("You entered the number: %d\n\n",inputValue);//Prints out the text and input value in the place of %d

	return 0;
}