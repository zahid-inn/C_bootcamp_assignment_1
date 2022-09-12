#include <stdio.h>

int main()
{
    double area;
    float pi = 3.14;
    int r;

    printf("Enter Radius of the circle in Interger\n");
    scanf("%d",&r);

    area = pi * (r*r);

    printf("Area of circle %lf having radius %d", area, r);
    return 0;
}