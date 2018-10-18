#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long double a, b, c;
	printf("Enter right triangle the three sides"); 
	scanf_s("%Lf%Lf%Lf", &a, &b, &c);
	if (a == (b*b + c*c)/a)printf("%Lf is right triangle  hypotenuse", a);
	else if (b == (a*a + c*c)/b)printf("%Lf is right triangle  hypotenuse", b);
	else if (c == (a*a + b*b)/c)printf("%Lf is right triangle  hypotenuse", c);
	else("Not right triangle");
	system("pause");
	return 0;
}