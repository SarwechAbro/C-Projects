#include<stdio.h>
int main()
{
	int i, j, k, x;
	printf("Enter a number: ");
	scanf("%d", &x);
	for(i = 0; i <= (x/2); i++)
	{
		for(j = (x/2); j > i; j--)
		{
			printf(" ");
		}
		for(k = 0; k <= 2*i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = (x/2); i >= 0; i--)
	{
		for(j = i; j <= (x/2); j++)
		{
			printf(" ");
		}
		for(k = 2*i; k > 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
