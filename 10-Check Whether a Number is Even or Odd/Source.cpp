//10. C++ Program to Check Whether a Number is Even or Odd

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>

int main(void) {
	int num1;

	printf_s("Please input a whole number: ");
	scanf_s("%d", &num1);


	num1 % 2 == 0 ? printf_s("\nThe number is even: %d", num1) : printf_s("\nThe number is odd: %d", num1);

	//if (num1 % 2 == 0)
	//{
	//	printf_s("\nThe number is even: %d", num1);
	//}
	//else
	//{
	//	printf_s("\nThe number is odd: %d", num1);
	//
	//}

	


	return 0;
}