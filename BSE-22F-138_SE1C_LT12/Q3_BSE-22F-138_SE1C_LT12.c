#include<stdio.h>
int main()
{
	int f; 
    printf("Enter Temperature In Fahrenheit: ");
	scanf("%d", &f);
    	  

	checktemp(f);
  

	return 0;
}
void checktemp(int f, int c)
	{  
    c = 5*(f-32)/9;
	printf("Temperature Is : %d Centigrade ", c);
	}
