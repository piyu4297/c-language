#include<stdio.h>
int main()
{
	int number,rem,large=0;
	printf("enter ur number");
	scanf("%d",&number);
	int ori=number;
	while(number>0);
	{
		rem=number%10;
		if(rem>large)
		{
			large=rem;
		}
		number=number/10;
	}
	printf("%d is largest from %d",large,ori);
	return 0;
}
