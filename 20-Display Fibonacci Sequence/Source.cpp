//20. C++ Program to Display Fibonacci Sequence

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>


int main(void) {
	int n;
	int fib0 = 0;
	int fib1 = 1;
	int sum = fib0 + fib1;

	printf_s("Please input any whole posetive number: ");
	scanf_s("%d", &n);

	printf_s("Fibonacci 1: %d\n", fib0);
	printf_s("Fibonacci 2: %d\n", fib1);

	//Fibonacci Series up to n terms
	for (int i = 3; i <= n; i++) {
		printf_s("Fibonacci %d: %d\n", i, sum);
		fib0 = fib1;
		fib1 = sum;
		sum = fib0 + fib1;
	}




	printf_s("\n\nFibonacci Sequence Up to: %d",n);
	fib0 = 0;
	fib1 = 1;
	sum = fib0 + fib1;

	//Fibonacci Sequence Up to a Certain Number
	while (sum <= n) {
		printf("\n%d", sum);
		fib0 = fib1;
		fib1 = sum;
		sum = fib0 + fib1;
	}



	return 0;
}