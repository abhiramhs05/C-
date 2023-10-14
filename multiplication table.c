#include<stdio.h>
int main()
{
	int a,i;
	printf("enter a number");
	scanf("%d",&a);
	printf("\n");

	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",a,i,i*a);
	}
}
