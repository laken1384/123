#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, x = 0;
	long double b, c;
	do
	{
		printf("Enter # of hours works (-1 to end) : "); scanf_s("%d", &a);
		if (a != -1)
		{

			printf("Enter hourly rate of the worker ($00.00): "); scanf_s("%Lf", &b);
			c = (float)a*b ;
			printf("Enter interest charge is $%.2Lf\n", c);

		}
		else x = 1;

		printf("\n");
	} while (x == 0);
	system("pause");
	return 0;
}