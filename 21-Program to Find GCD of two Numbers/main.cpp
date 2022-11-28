#include <stdio.h>

void GCD(int n1, int n2);

int main(void) {
	int num1;
	int num2;

	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	GCD(num1, num2);
}

void GCD(int n1, int n2) {
	int temp;
	
	if (n1 < n2){
		temp = n2;
		n2 = n1;
		n1 = temp;
	}

	int remainder;
	remainder = n1 % n2;
	
	printf_s("\nremainder: %d", remainder);

	while (remainder != 0) {
		remainder = n1 % n2;
		printf_s("\n%d / %d remainder: %d", n1, n2, remainder);
		n1 = n2;
		n2 = remainder;
	}
}