#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int  x = 0;
	long double a,b;
	do
	{
		printf("Enter sales in dollars(-1 to end) : "); scanf_s("%Lf", &a);
		b= (float)a*0.09 + 200;
			if (a!=-1) printf("Salary is : %.2Lf\n",b); 
			else x = 1;
			printf("\n");
	} while (x == 0);
	system("pause");
	return 0;
}