#include<stdio.h>
int main()
{ 
     float len, wid, area; 
     printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);
     area = len * wid;
     printf("Area of Rectangle= %.3f cm\n",area);

     return 0;
}
