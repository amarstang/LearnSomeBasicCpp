//19. C++ Program to Generate Multiplication Table

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>


int main(void) {
	int num;
	int sum;

	printf_s("Please input any whole posetive number: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 100; i++) {
		sum = i * num;
		printf_s("%d * %d = %d\n", num, i, sum);
	}



	return 0;
}