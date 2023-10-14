#include<stdio.h>
int main()
{
	int i,a;
	printf("enter a number");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(i%2==0)
		{
			printf("\n%d\n",i);
		}
	}
	return 0;
}
