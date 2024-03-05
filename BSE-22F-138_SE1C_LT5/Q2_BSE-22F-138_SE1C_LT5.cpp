#include <stdio.h>
int main() 
{
  int obtainmarks, grade ;
  printf("Enter Your Obtain Marks: ");
  scanf("%d", &obtainmarks);  
   if(obtainmarks<50 )
    { 
         printf("You Are Fail!");
	}
	else if(obtainmarks>=50 && obtainmarks<=60)  
    {  
        printf("Your Grade Is: D");  
    } 
	else if(obtainmarks>=61 && obtainmarks<=70) 
	{  
        printf("Your Grade Is: C");  
    } 
    else if(obtainmarks>=71 && obtainmarks<=80) 
	{  
        printf("Your Grade Is: B ");  
    
	} else if(obtainmarks>=81 && obtainmarks<=90) 
	{  
        printf("Your Grade Is: A- ");  
    } 
    else if(obtainmarks>=91 && obtainmarks<=100) 
	{  
        printf("Your Grade Is: A+");  
    } 
    
	return 0;
}
