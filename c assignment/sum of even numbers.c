#include<stdio.h>
int main()
{
	int i,b,sum=0;
	printf("enter ur number");
	scanf("%d",&b);
	for(i=1;i<b;i++)
	{
		if(i%2==0)
		{
			printf("even numbers are");
				sum=sum+i;
		}
		
	}
	
	return 0;
}
