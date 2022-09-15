//9. C++ Program to Swap Two Numbers

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>

int main(void) {
	float num1;
	float num2;
	float placeHolder;

	printf_s("Please input a number: ");
	scanf_s("%f", &num1);
	printf_s("Please input a second number: ");
	scanf_s("%f", &num2);

	printf_s("\n\nFirst number: %f\nSecond number: %f ",num1,num2);

	placeHolder = num1;
	num1 = num2;
	num2 = placeHolder;

	printf_s("\n\nThe numbers swarped\nFirst number: %f\nSecond number: %f\n", num1, num2);


	return 0;
}