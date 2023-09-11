#include<stdio.h>
int main()
{
    int number1,number2,modulo;
	printf("enter any two value");
	scanf("%d",&number1);
	scanf("%d",&number2);
	modulo=number1%number2;
	printf("modulo is %d",modulo);
	
	return 0;
}
