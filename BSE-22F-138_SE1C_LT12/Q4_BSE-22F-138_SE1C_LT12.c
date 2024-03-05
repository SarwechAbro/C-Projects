#include<stdio.h>
int main()
{
	double current, resistance; 
    printf("Enter Current In AMPs(A): ");
	scanf("%lf", &current);
    printf("Enter Resistance In OHMs(Ø): ");
	scanf("%lf", &resistance);	  
    volt(current,resistance);
  

	return 0;
}
void volt(double current, double resistance)
	{  
    double sum = current*resistance;
	printf("Voltage Is : %lf ", sum);
	}
