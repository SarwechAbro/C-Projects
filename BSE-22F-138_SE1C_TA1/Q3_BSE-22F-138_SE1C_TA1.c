# include<stdio.h>

main ()
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
	
  return 0;
}

