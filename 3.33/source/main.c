#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,b, i,j,x=0;
	do
	{
		printf("Enter length (-1 to end) : "); scanf_s("%d", &a);
		if (a != -1)
		{
			printf("Enter breadth  : "); scanf_s("%d", &b);
			for (i = 0; i < b; i++) printf("+");
			printf("\n");
			for (i = 0; i < a - 2; i++) 
			{
				printf("+");
				for (j = 0; j < b - 2; j++) printf(" ");
				printf("+");
			}
			printf("\n");
			for (i = 0; i < b; i++) printf("+");
			printf("\n");
		}
		else x = 1;
		printf("\n");
	} while (x == 0);
	system("pause");
	return 0;
}