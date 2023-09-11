#include<stdio.h>
int main()
{
	int end,i,sum=0;
	printf("enter the end point");
	scanf("%d",&end);	
	for(i=1;i<=end;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
    }
	printf("%d is the sum of all the values",sum);
	return 0;
}
