//16. C++ Program to Check Whether a Character is an Alphabet or not

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>

int main(void) {
	char chr;

	printf_s("Please input any number: ");
	scanf_s("%c", &chr);

	(chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z') ? printf_s("\nThe character: %c\nis in the alphabet\n", chr) : printf_s("\nThe character: %c\nis not in the alphabet\n", chr);


	//if (chr >= 'a' && chr <= 'z' || chr >= 'A' && chr <= 'Z') {
	//	printf_s("\nThe character: %c\nis in the alphabet\n", chr);
	//}
	//else {
	//	printf_s("\nThe character: %c\nis not in the alphabet\n", chr);
	//}


	return 0;
}