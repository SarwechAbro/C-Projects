#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{

  
	float x[50],y[50];
	int i=0,size;
	float sum[50],totalCH,totalGP,totalGPA;
	char ch;
 
    printf("Enter Total Courses To Check GPA: ");
    scanf("%d",&size);

	for(i=0;i<size;i++)
    {
     	 printf("Enter Your Grading Point: ");
		 scanf("%f",&x[i]);	
	     printf("Enter Credit Hours: ");
	     scanf("%f",&y[i]);
       
       
	}	
       
	     
	      
   for(i=0;i<size;i++)
        {
     	sum[i]=x[i]*y[i];
        }
   for(i=0;i<size;i++)
	    {
	    totalCH=totalCH+y[i];
	    totalGP=totalGP+sum[i];
	   }
        
		totalGPA=totalGP/totalCH;
	
   for(i=0;i<size;i++)
	{
	
	printf("\nThe Grading Points Of Course After Appliying Farmula Is:%.2f",sum[i]);
	
	}
     printf("\nTotal Grading Points: %.2f",totalGP);   
     printf("\nTotal Credit Hours: %.2f",totalCH);
     printf("\nTotal GPA Of %d Courses Is: %.2f",size,totalGPA);
     printf("\nDo You Want To Check Another GPA (y=Yes/n=NO): ");
     scanf("%s",&ch);
     if(ch=='y')
     {
       printf("\nSorry I'm Unable To Check Again Because My Loop Is Cutted Please Run Agian This Programe To Check");	
	 }
     else if(ch=='n')
     {
     	 printf("Thank You");
		 exit(0);
	 }
  
     else
     {
  	     printf("\nEnter A Valid Choice And Try Agian");
         printf("\nThank You");
         exit(0);
	 }
  

	return 0;
}
