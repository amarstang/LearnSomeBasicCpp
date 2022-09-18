//13. C++ Program to Find all Roots of a Quadratic equation

//Written by Niels Jakob
//Date 2022/9/18 (yyyy/mm/dd)

#include<stdio.h>
#include<math.h>


float textInput() {
	float out;
	printf_s("Please input any number: ");
	scanf_s(" %f", &out);
	return out;
}



int main(void) {
	float a;
	float b;
	float c;

	double D;	//Discriminant
	float r1;	//Root 1
	float r2;	//Root 2

	
	a = textInput();
	b = textInput();
	c = textInput();


	D = b*b-4*a*c; //Discriminant  calculation

	printf_s("\nDiscriminant: %f", D);

	//(-b(+-)sqrt(b^2-4*a*c))/(2*a) the calculations

	//For the quadratic equation ax2 + bx + c = 0, the expression b2 – 4ac is called the discriminant.
	//The value of the discriminant shows how many roots f(x) has:
	//- If b2 – 4ac > 0 then the quadratic function has two distinct real roots.
	//- If b2 – 4ac = 0 then the quadratic function has one repeated real root.
	//- If b2 – 4ac < 0 then the quadratic function has no real roots.
	if (D > 0)
	{
		r1 = (-b + sqrt(D)) / (2 * a);
		r2 = (-b - sqrt(D)) / (2 * a);
	}
	else if (D == 0)
	{
		r1 = -b / (2 * a);
	}
	else
	{
		r1 = -b / (2 * a);
		r2 = sqrt(-D) / (2 * a);
	}


	if (D != 0)
	{
		printf_s("\nRoot 1: %f", r1);
		printf_s("\nRoot 2: %f", r2);
	}
	else
	{
		printf_s("\nRoot 1: %f", r1);
	}


	

	printf_s("\n");

	return 0;
}