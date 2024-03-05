#include <stdio.h>
int main()
{
      int n,f,x,s,y,t,l,sum,sum2,square,cube;
      printf("Enter A Number: ");
      scanf("%d",&n);
     if(n<999 || n>9999)
     {
     	printf("Please Insert 4 Digit Number");
	 }
	 else{
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
    else{square=sum*sum;
        printf("\nThis is an Odd Number\n");
        printf("The Square Of Sum Is %d",square);
        }
      }  
	  return 0;
}
