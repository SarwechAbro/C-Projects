#include<stdio.h>
main()
{
	int a;
	printf("Enter A Number: ");
	scanf("%d", &a);
	plus(a);
	
	
	
	return 0;
}
int plus(int a)
	   {
	    int num,num2,sum;
	    num=a/10;
	    num2=a%10;
	    sum=num+num2;
		printf("The Sum Is: %d",sum);
        
    }
    
