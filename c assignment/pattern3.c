#include<stdio.h>
int main()
{
	int i, j,temp=1;
	for (i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",temp++);
		}
		printf("\n");
	}
	return 0;
}
