#include<stdio.h>

main ()
{
   int num1,num2,num3,sum;
   printf("Enter A Number\n");
   scanf("%d", &num1);	
   printf("Enter Another Number\n");
   scanf("%d", &num2);
   printf("Enter Another Number\n");
   scanf("%d", &num3);
   sum=num1+num2+num3;
   printf("Avarage Is %d" , sum/3); 
   
   
   return 0;
}
