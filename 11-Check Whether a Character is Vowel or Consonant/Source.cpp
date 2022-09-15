//11. C++ Program to Check Whether a Character is Vowel or Consonant

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>
#include<stdlib.h>//Extra			//used for system("CLS") to clear the terminal
#include <ctype.h>//Line 20 comment	//used for toupper() so i only need to check upper case vowels, as each char is unique: 'A' != 'a'

int main(void) {
	char chr;
	char againChar;

	do{	//Extra
		system("CLS");//Extra

		printf_s("Please input any character to see if it's a vowel or consonant: ");
		scanf_s(" %c", &chr ,1);

		switch (toupper(chr)) //toupper, is nice to have, if not then alse make cases for all lower case vowels
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf_s("\nYou inputted a vowel: %c", chr);
			break;
		default:
			printf_s("\nYou inputted a consonant: %c", chr);
			break;
		}

		printf_s("\n\nDo you want to do it again: y / n: ");//Extra
		scanf_s(" %c", &againChar, 1);						//Extra				
	} while (againChar == 'y');								//Extra

	return 0;
}