#include<stdio.h>
int main ()
{
	int m1,m2,m3,total,Pr,maintotal=300;

	printf("enter ur first subject marks");
	scanf("%d",&m1);
	printf("enter ur second subject marks");
	scanf("%d",&m2);
	printf("enter ur third subject marks");
	scanf("%d",&m3);
	
	total=m1+m2+m3;
	printf("total obtained marks is %d",total);
	Pr=total*100/maintotal;
	printf("Pr is %d",Pr);
	
	return 0;
	
}
