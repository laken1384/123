#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a=1,b=10,c=10,d=1,i,j;
		printf("(A)          (B)          (C)          (D) \n"); 
		for (j = 0; j < 10; j++)
		{
			for (i = 0; i < a ; i++) printf("*");
			for (i = 0; i < 10 - a; i++) printf(" ");
			printf("   ");
			for (i = b ; i >0; i--) printf("*");
			for (i = 10 - b; i >0; i--) printf(" ");
			printf("   ");
			for (i = 10 - c; i >0; i--) printf(" ");
			for (i = c ; i > 0; i--) printf("*");
			printf("   ");
			for (i = 0; i < 10 - a; i++) printf(" ");
			for (i = 0; i < a ; i++) printf("*");
			printf("   ");
			printf("\n");
			a++;
			b--;
			c--;
			d++;
		}
	system("pause");
	return 0;
}