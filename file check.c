#include<stdio.h>
int main()
{   
    int a;
	FILE *open;
	FILE *result;
	open = fopen("input.txt","r");
	result = fopen("out.txt","w");
	if (open == NULL)
	   {
	   	printf("Error");
	   }
	else
	{
	printf("Success...");
	}
	fscanf(open,"%d",&a);
	fprintf(result,"%d",a);
	
	return 0;
} 
