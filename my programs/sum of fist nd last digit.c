#include<stdio.h>
int main()
{
	int number,last_digit,first_digit,sum=0;
	printf("enter number");
	scanf("%d",&number);
	printf("number is %d",number);
	last_digit=number%10;
	while(number>=10)
	{
		number=number/10;
	}
	first_digit=number;
	sum=first_digit+last_digit;
	printf("\n %d is sum of %d and %d",sum,first_digit,last_digit);
	return 0;
}
