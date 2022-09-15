//3. C++ Program to Add Two Integers

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>

//Testing using my own function
//Input in 2 integers | Output sum of input intergers | Takes in only whole posetive numbers
int addition(int x1, int x2) {
	int addition = x1 + x2;
	return addition;
}


int main(void) {
	int num1;
	int num2;
	int sum;

	printf_s("Please type in a whole number and press enter: ");//Prints out the text in within the "" marks
	scanf_s("%d", &num1);										//Reads user input and sets inputValue varible to it, if it's a integer
	printf_s("Please type in a second whole number and press enter: ");
	scanf_s("%d", &num2);

	printf_s("You entered the number: %d\n\n", addition(num1,num2));//Prints out the text and input value in the place of %d

	return 0;
}