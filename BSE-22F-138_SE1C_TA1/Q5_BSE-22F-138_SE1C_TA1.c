#include <stdio.h>

int main()
{
    int choice;
    printf("****Menu****\n");
    printf("1-Armstrong Number\n");
    printf("2-Sum Of Digits\n");
    printf("3-Swape Number\n");
    printf("4-Reverse Number\n");
    printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
 if(choice==1)
 {
	int num, originalNum, f,x,s,t,remainder, result = 0;
    printf("Enter A Number: ");
    scanf("%d", &num);
    originalNum = num;
  if(num<100)
  {
  	printf("Error ");
  }
  else
  {
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
    else
	 {
        printf("%d Is Not An Armstrong Number", num);
     }
  } 
}
else if(choice==2)
 {
   int n,f,x,s,y,t,l,sum,sum2,square,cube;
      printf("Enter A Number: ");
      scanf("%d",&n);
     if(n<999 || n>9999)
     {
     	printf("Please Insert 4 Digit Number");
	 }
	 else
	{
	  f=n/1000;  
      x=n%1000;
      s=x/100;
      y=x%100;
      t=y/10;
      l=y%10;
      sum=f+s+t+l;
	  printf("The Sum Is %d",sum);
	  
	  if(sum%2==0)
      {cube=sum*sum*sum;
       printf("\nThis is an Even Number\n");
	  printf("The Cube Of Sum is %d",cube);
	  }
    else
	{square=sum*sum;
     printf("\nThis is an Odd Number\n");
     printf("The Square Of Sum Is %d",square);
    }
    }  
 }
else if(choice==3)
 {
   int a,b,c;
   printf("Enter A Number: ");
   scanf("%d", &a);	
   printf("Enter Another Number: ");
   scanf("%d", &b);
   c=a;
   printf("The Value Before Swape %d" , a );
   b=b;
   printf(" \nThe Value Before Swape %d" , b ); 
   a=b;
   printf("\nThe Value After Swape %d" , a );
   b=c;
   printf("\nThe Value After Swape %d" , b );
	
 } 
else if(choice==4)
 {
 	int n, reverse = 0, remainder;
    printf("Enter A Number: ");
    scanf("%d", &n);
    while (n != 0) 
   {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
   }
  printf("Reversed number: %d", reverse);
 }
else
 {
 	printf("Please Select From Given Choices");
 }
  
    return 0;
}
