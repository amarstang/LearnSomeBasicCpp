//7. C++ Program to Find the Size of int, float, double and char

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>

int main(void) {
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf_s("\nFloat size: %d\nInteger size: %d\nDouble size: %d\nRemainder: %d\n", sizeof(floatType), sizeof(integerType), sizeof(doubleType), sizeof(charType));

	return 0;
}