#include<stdio.h>
int main()
{
	int a,b,temp;
	a=1;b=2;

	temp=a;
	a=b;
	b=temp;

	printf("a=%d \n b=%d",a,b);
	return 0;
}
