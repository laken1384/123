#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int c,x = 0;
	long double a,b,  d;
	do
	{
		printf("Enter loan principal (-1 to end) : "); scanf_s("%Lf", &a);
		if (a != -1)
		{

			printf("Enter interest rate: "); scanf_s("%Lf", &b);
			printf("Enter term of the loan in days: "); scanf_s("%d", &c);
			d = (float)a*b*c/365;
			printf("Enter interest charge is $%.2Lf\n",d); 
			
		}
		else x = 1;

		printf("\n");
	} while (x == 0);
	system("pause");
	return 0;
}