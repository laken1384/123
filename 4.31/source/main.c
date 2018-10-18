#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a = 1, b = 5;
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < b; i++) printf(" ");
		for (int i = 0; i < a; i++) printf("*");
		printf("\n");
		b--;
		a=a+2;
	}
	
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < b; i++) printf(" ");
		for (int i = 0; i < a; i++) printf("*");
		printf("\n");
		b++;
		a = a - 2;
	}
	system("pause");
	return 0;
}