#include<stdio.h>
int main()
{
	int pd,pdsalary,salary;
	printf("enter ur present days");
	scanf("%d",&pd);
	printf("enter ur per day salary");
	scanf("%d",&pdsalary);
	salary=pd*pdsalary;
	printf("final salary is %d",salary);
	
	return 0;
}
