#include <stdio.h>
 main()
{
    int dcnum,reminder,qoutient,octnum=0,hdnum;
	int octnumber[100],i=1,j;
	char o,b,h,num;
	printf("**************Menu***************\n");
    printf("Enter O For Convert in Octal\n");
    printf("Enter B For Convert in Binary\n");
    printf("Enter H For Convert in Hexadecimal\n");
    printf("**********************************\n");
	printf("Enter Character To Convert: ");
	scanf("\n%c", &num);
   if(num=='o')
 	{
	 printf("Enter The Decimal Number: ");
 scanf("%d", &dcnum);
  qoutient=dcnum;
  while(qoutient!=0)
    {
    	octnumber[i++]=qoutient%8;
    	qoutient=qoutient/8;
	}
  for(j=i-1;j>0;j--)
  octnum=octnum*10+octnumber[j];
   	printf("The Octal value of Decimal No %d Is: %d ",dcnum,octnum);
   }
 else if (num=='b')
 {
    int a[10], number, i, j;
    printf("Enter The Decimal Number: ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    
    printf("Binary Number of a Given Number Is:  ");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");

}
    else if (num=='h')
    { 
     long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    for (i = j; i >= 0; i--)
        printf("\nThe Hexadecimal value of Decimal No Is: %c", hexadecimalnum[i]);
}
 else
 {
   printf("Insert From Given Characters ");	
 }
 
 
 
 
 return 0; 
}
