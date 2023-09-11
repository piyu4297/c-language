#include<stdio.h>
int main()
{
	int number,i,rem,arm=0;
	printf("enter number");
	scanf("%d",&number);
	int ori=number;
	while(number!=0)
	{
		rem=number%10;
		arm=arm+(rem*rem*rem);
		number=number/10;
	}
	if(arm==ori)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	return 0;
}
