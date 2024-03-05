#include <stdio.h>
#include <math.h>

int main()
{
    double edges = 0;
    double volume = 0;
    double area = 0;

    printf("Enter the Edges: ");
    scanf("%lf", &edges);

    volume = pow(edges, 3);
    area = 3 * 2 * pow(edges, 2);

    printf("Volume of Cube: %lf\n", volume);
    printf("Surface Area of Cube: %lf\n", area);

    return 0;
}
    