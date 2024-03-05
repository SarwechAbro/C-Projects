#include<stdio.h>
#include<string.h>
int main()
{   
    int sum,a,f,x,s,y,t,l;
    FILE *open;
	FILE *result;
	open = fopen("input.txt","r");
	result = fopen("output.txt","w");
	if (open == NULL)
	   {
	   	printf("Error");
	   }
	else
	{
	printf("Success... ");
	}
	 fscanf(open,"%d",&a);
      f=a/1000;  
      x=a%1000;
      s=x/100;
      y=x%100;
      t=y/10;
      l=y%10;
      sum=f+s+t+l;
	  fprintf(result,"The Sum Is:%d",sum);
    
	
 return 0;   
}
 

