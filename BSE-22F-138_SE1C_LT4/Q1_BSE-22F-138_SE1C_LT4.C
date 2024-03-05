# include<stdio.h>

main ()
{
   int km,hr,mtr,sec,ms;
   printf("Enter Distance In KM\n");
   scanf("%d", &km);	
   printf("Enter Time In Hours\n");
   scanf("%d", &hr);
   mtr=km*1000;
   sec=hr*3600;
   printf("Your Speed Is In Metars/Sencond  %d" , mtr/sec); 
   
   
   return 0;
   
}
