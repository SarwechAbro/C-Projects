#include <stdio.h>
int main() 
{ 
    int num1, num2;
    printf("Enter A Number: ");
    scanf("%d", &num1);
     printf("Enter An Other Number: ");
    scanf("%d", &num2);
  if(num1 %2==0 && num2 %2==0)
    {
	printf("You Have Entered Two Even Numbers");
    }
     else if(num1 %2!=0 && num2 %2!=0)
     {
     	printf("You Have Entered Two Odd Numbers");
	 }
    else if(num1 %2!=0 || num2 %2==0 || num1 %2==0 ||num2 %2!=0)
     {
     	printf("You Have Entered One Even And One Odd Number");
     } 


return 0;
}
