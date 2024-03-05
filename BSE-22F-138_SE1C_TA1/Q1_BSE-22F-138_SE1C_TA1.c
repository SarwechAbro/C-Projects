#include <stdio.h>
int main() 
{
    int num, originalNum, f,x,s,t,remainder, result = 0;
    printf("Enter A Number: ");
    scanf("%d", &num);
    originalNum = num;
  if(num<100)
  {
  	printf("Error ");
  }
   else{

    while (originalNum != 0)
	{
       remainder = originalNum % 10;
       result += remainder * remainder * remainder;
       originalNum /= 10;
    }
	
    

    if (result == num)
     {
	  f=num/100;  
      x=num%100;
      s=x/10;
      t=x%10;
      printf("%d\n%d\n%d\nIs An Armstrong Number",f,s,t); 
	 }
    else{
        printf("%d Is Not An Armstrong Number", num);
        }
}
    return 0;
}

