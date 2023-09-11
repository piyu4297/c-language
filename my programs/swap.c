#include<stdio.h>
int main ()

{
	int a=10,b=20,temp;

	printf ("before swap  a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
    printf ("\n after swap a is a=%d and b is b=%d",a,b);	
    
     return 0;
}

