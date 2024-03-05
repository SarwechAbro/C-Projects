#include<stdio.h>
 
int main() {
    int i, space, rows, star=0;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    for(i = 0; i < rows-1; i++) 
	{
        for(space = 1; space < rows-i; space++) 
		{
            printf(" ");
        }
        for (star = 0; star <= 2*i; star++) 
		{
            if(star==0 || star==2*i)
                printf("*");
            else
                printf(" ");
        }
        
        printf("\n");
    }
   
    for(i=0; i<2*rows-1; i++)
	{
        printf("*");
    }
    return 0;
}
