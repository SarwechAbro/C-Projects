#include <stdio.h>
int main() 
{ 
   int num1, num2;
   char sign; 
	printf("Enter An Number: ");
    scanf("%d", &num1);
    printf("Enter Another Number: ");
    scanf("%d", &num2);
    printf("\nPlease Enter + For Plus\nPlease Enter - For Minus\nPlease Enter * For Multiplaction\nPlease Enter / For Divide");
    printf("\nPlease Select A Sign To Do Operation: ");
	scanf("\n%c", &sign);
    if (sign=='+')
    {
    	printf("The Sum Is %d",num1+num2);
	}
	else if (sign=='-')
    {
    	printf("The Sum Is %d",num1-num2);
	}
    else if (sign=='*')
    {
    	printf("The Sum Is %d",num1*num2);
	}
    else if (sign=='/')
    {
    	printf("The Sum Is %d",num1/num2);
	}
    else
	{
	    printf("Please Select From Given Choices");	
	}




	return 0;
	
}
