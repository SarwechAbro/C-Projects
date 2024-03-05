#include<stdio.h>
int main()
{
	double marks; 
    int total_marks=15;
	printf("Enter Your Quiz #1 Marks (Out Of 15): ");
	scanf("%lf", &marks);
    	  
	if(marks>=0 && marks<=15)
	{
	checkper(marks);
   }
	else
	{
		printf("Wrong marks");
    }	    
	return 0;
}
void checkper(double marks, double per)
	{  
	int total_marks=15;
    per=(marks*100)/total_marks;
	printf("Your Percentage Is : %lf", per);
	}
	

