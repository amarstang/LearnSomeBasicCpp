//17. C++ Program to Calculate the Sum of Natural Numbers

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>

int main(void) {
	int num;
	int sum = 0;

	printf_s("Please input any whole posetive number: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		sum += i;
		printf_s("\nIteration/Adding: %d || Sum: %d", i,sum);

	}
	
	sum = (num * (num + 1)) / 2;
	printf_s("\n\nSum of natrual numbers: %d\nUsing (num * (num + 1)) / 2\n",sum);



	return 0;
}