#include <stdio.h>

int main() 
{
    int bill, pay;
	int N, t, k, i;
    int currency[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1}; 
   printf("Enter Total Bill: ");
  scanf("%d", &bill);
   printf("Enter Payment: ");
  scanf("%d", &pay); 
	N=pay-bill;
   
    t = 0;
    
    for (i = 0; i < sizeof(currency) / sizeof(currency[0]); i++) 
	{
        k = N / currency[i];
        printf("%d Note(s) of= %d\n", k,currency[i]);
        t = t + k;
        N = N - k * currency[i];
    }


    return 0;
}













