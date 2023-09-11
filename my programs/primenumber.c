#include<stdio.h>
int main()
{
	int number,i,temp=0;
	printf("enter number");
	scanf("%d",&number);
	for (i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			temp++;
		}
	}
	if(temp==2)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	return 0;
}
