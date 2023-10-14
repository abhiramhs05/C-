#include<stdio.h>
int main()
{
	int n,i,flag=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		flag=1;
    		break;
    	}
    }
    if(flag==0)
    {
    	printf("The Entered Number is Prime");
    }
    else{
    	printf("The Entered Number is Not Prime");
    }
return 0;

}
