#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,x=0;
	long double b, c, d, e,f;
	do
	{
		printf("Enter account number(-1 to end) : "); scanf_s("%d", &a);
		if (a != -1)
		{

			printf("Enter beginning balance : "); scanf_s("%Lf", &b);
			printf("Enter total charges : "); scanf_s("%Lf", &c);
			printf("Enter total credits : "); scanf_s("%Lf", &d);
			printf("Enter credit limit : "); scanf_s("%Lf", &e);
			//printf("%d %f %f %f %f", a, b, c, d, e);
			f = (float)b + d;
			if (f > e)
			{
				printf("Account : %d\n", a);
				printf("Credit Limit : %.2Lf\n", e);
				printf("Balance : %.2Lf\n", f);
				printf("Credit Limit Exceeded");
			}
		}
		else x = 1;
		printf("\n");
	} while (x == 0);
	system("pause");
	return 0;
}