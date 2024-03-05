#include <stdio.h>
int main() 
{
  int year, currentyear;
  printf("Enter Your Birth Year: ");
  scanf("%d", &year);
   printf("Enter Current Year: ");
  scanf("%d", &currentyear);  
   if((year%4==0) || (year%400==0) || (year%100==0))  
    {  
        printf("You Were Born In A Leap Year");  
    } 
	else 
	{  
        printf("Your Age Is %d",currentyear-year );  
    }  












 return 0;
}
