//15. C++ Program to Check Whether a Number is Positive or Negative

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>


int main(void) {
	float num;

	printf_s("Please input any number: ");
	scanf_s("%f", &num);

	//way 1
	abs((int)num) - num == 0 ? printf_s("\nPosetive: %f", num) : printf_s("\nNegative: %f", num);

	//way 2
	if ((abs((int)num)-num) == 0) {
		printf_s("\nPosetive: %f", num);
	}
	else {
		printf_s("\nNegative: %f", num);
	}


	return 0;
}