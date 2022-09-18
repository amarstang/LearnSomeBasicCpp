//18. C++ Program to Find Factorial of a Number

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>


int main(void) {
	int num;
	int sum = 1;

	printf_s("Please input any whole posetive number: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum *= i;
		printf_s("\nIteration/Adding: %d || %d * %d || Sum: %d", i, sum, i, sum);
	}

	printf_s("\nFactorial: n! = 1 * 2 * 3 * 4... * n");



	return 0;
}