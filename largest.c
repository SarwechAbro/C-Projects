#include<stdio.h>
int main()
{
	int num[10],i,num1,num2,num3,num4;
	

	for(i=0;i<5;i++)
	{
			printf("Enter A Number:");
        	scanf("%d", &num[i]);
    }
	for(i=0;i<5;i++)
	{
     if(num[i]>num1)
     {
     	num2=num1;
     	num1=num[i];
     	
	 }
	 else if(num[i]>num2 && num2<num1)
   {
   	 num3=num2;
   	 num2=num[i];
   }
   else if(num[i]>num3 && num3<num2)
   {  
     num4=num3;
   	 num3=num[i];
   	
   }
   else if(num[i]>num4 && num4<num3)
   {
   	 num4=num[i];
   	
   }
   
    }
	  
	printf("The Largest Number Is: %d", num1);
	printf("\nThe 2nd Largest Number Is: %d", num2);
	printf("\nThe 3nd Largest Number Is: %d", num3);
	printf("\nThe 4nd Largest Number Is: %d", num4);
	
	
	return 0;
}
