#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void main()
{
	int i, j, tmp;
	int swap=0;
	int a[SIZE] ;
	for ( i = 0; i < SIZE; i++)
	{	
		int x;
		printf("¿é¤Ja[%d]ªº­È", i);
		scanf("%d",&x);
		a[i] = x;
	}
	printf("\nªì©l­È:");
	for (i = 0; i < SIZE; i++)
	{
		
		printf("%4d",a[i]);
	}
	printf("\n\n");
	for (i = 0; i < SIZE - 1; i++)
	{
		swap = 0;
		for (j = 0; j < (SIZE - 1 - i); j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swap = 1;
			}
		}
		printf("Loop %d:", i);
		for (j = 0; j < SIZE; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
		if (swap==0)
		{
			break;
		}
	}
	system("pause");
}