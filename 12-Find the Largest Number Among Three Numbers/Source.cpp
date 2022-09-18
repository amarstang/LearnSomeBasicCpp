//12. C++ Program to Find the Largest Number Among Three Numbers

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>


int main(void) {
	float floatArr[3];
	float lNum = 0;


	for (int i = 0; i < sizeof(floatArr)/sizeof(int); i++)
	{
		printf_s("Please input any number: ");
		scanf_s(" %f", &floatArr[i]);
	}

	lNum = floatArr[0];

	for (int i = 1; i < sizeof(floatArr) / sizeof(int); i++)
	{
		if (lNum < floatArr[i])
		{
			lNum = floatArr[i];
		}
	}

	printf_s("\nLargest number %f: ", lNum);


	////Outputs indexes of the int array
	//for (int i = 0; i < sizeof(intArr) / sizeof(int); i++)
	//{
	//	printf_s("\nIndex %d: %d ", i, intArr[i]);
	//
	//}
	
	return 0;
}