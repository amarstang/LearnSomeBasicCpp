//5. C++ Program to Find ASCII Value of a Character

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>


int main(void) {
	char userInput;

	printf_s("Please type in any character to see it's values: ");
	scanf_s("%c", &userInput);

	printf_s("\n\nThe ASCII Value of: %c is: %d", userInput, (int)userInput);

	return 0;
}