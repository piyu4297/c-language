#include<stdio.h>
int main()
{
     
     float radius, area;
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f", &radius);
     area = 3.14 * radius * radius;
     printf("Area of Circle = %.2f cm\n", radius,area);

     return 0;
}

