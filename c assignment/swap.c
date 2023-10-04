#include<stdio.h>
int main()
{ 
	int a=10,b=20,temp;
	printf("before swap a=%d b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swap a=%d b=%d",a,b);
	return 0;
}
