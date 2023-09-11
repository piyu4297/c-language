#include<stdio.h>
int main()
{
	int number,rem,rev=0;
	printf("enter two or three digit number");
	scanf("%d",&number);
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	printf("%d is reverse of number",rev);
	return 0;
}
