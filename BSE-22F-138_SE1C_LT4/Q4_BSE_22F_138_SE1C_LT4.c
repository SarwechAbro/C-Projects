#include <stdio.h>
int main(){
	float radius,volume;
	float pi=3.14;
	printf("Enter radius\n");
	scanf("%f", &radius);
	volume=(4/3)*pi*(radius*3);
	printf("The volume of sphere is %f", volume );
	printf(" cubic meter");
	return 0;
	
}
