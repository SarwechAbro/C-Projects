#include <stdio.h>
int main()
{
	float marks;
	int total_marks=5;
	float per;
	printf("Enter Your Marks:");
	scanf("%f", &marks);
	if(marks>=0 && marks<=total_marks)
	{
	per=(marks/total_marks)*100;
	printf("Your percentage : %f", per);
	}
	else{
		printf("Wrong marks");

}

 return 0;			
}
