//6. C++ Program to Compute Quotient and Remainder

//Written by Niels Jakob
//Date 2022/9/15 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>

int main(void) {
	float dividend;
	float divisor;
	float quotient = 0;
	float remainder;


	printf_s("Please type in a any number and press enter: ");
	scanf_s("%f", &dividend);
	printf_s("Please type in a second number and press enter: ");
	scanf_s("%f", &divisor);

	float dividendHolder = dividend;

	while (dividendHolder >= divisor)
	{
		dividendHolder = dividendHolder - divisor;
		quotient++;
	}

	//dividend = dividend + quotient * divisor; Could be used insted of line 21
	remainder = dividendHolder;


	printf_s("\n\nDividend: %f\nDivisor: %f\nQuotient: %f\nRemainder: %f\n",dividend,divisor,quotient,remainder);

	return 0;
}