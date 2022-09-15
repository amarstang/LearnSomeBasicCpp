//4. C++ Program to Multiply two Floating Point Numbers

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>

//Testing using my own function
//Input in 2 floats | Output sum of inputed floats | Takes floating point numbers, posetive and negative
int addition(float x1, float x2) {
	float addition = x1 + x2;
	return addition;
}


int main(void) {
	float num1;
	float num2;
	float sum;

	printf_s("Please type in a any number and press enter: ");//Prints out the text in within the "" marks
	scanf_s("%f", &num1);										//Reads user input and sets inputValue varible to it, if it's a integer
	printf_s("Please type in a second number and press enter: ");
	scanf_s("%f", &num2);

	printf_s("You entered the number: %d\n\n", addition(num1, num2));//Prints out the text and input value in the place of %d

	return 0;
}