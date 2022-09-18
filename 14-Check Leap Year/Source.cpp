//14. C++ Program to Check Leap Year

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>


int main(void) {
	int year;


	printf_s("Please input any year: ");
	scanf_s(" %d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf_s("\n%d is a leap year.\n",year);
			}
			else {
				printf_s("\n%d is not a leap year.\n", year);
			}
		}
		else {
			printf_s("\n%d is a leap year.\n", year);
		}
	}
	else {
		printf_s("\n%d is not a leap year.\n", year);
	}
	

	return 0;
}