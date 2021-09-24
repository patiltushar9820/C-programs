#include<stdio.h>
main()
{
	int i,flag=0,n,m;
	printf("enter number\n");
	scanf("%d",&n);
	m=n/2;
	if(n==0)
	{
		printf("invalid number\n");
		
	}
	else if(n==1)
	{
		printf("number is not prime");
	}
	else {
		for(i=2;i<=m;i++)
		{
			if(n%i==0)
			{
					printf("number is not a prime\n");
					flag=1;
					break;
			}
		
		}
		if(flag==0)
		{
			printf("number is a prime\n");
		}
	}
}
