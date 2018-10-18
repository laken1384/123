#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,i,j;
	long double b;
	printf("Enter your investment dollar: "); scanf_s("%D",&a);
	b = (float)a*1.1*1.105*1.11*1.115*1.12;
	printf(" compound interest : %.2Lf\n", b);
	system("pause");
	return 0;
}