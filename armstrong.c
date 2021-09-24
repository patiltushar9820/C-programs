#include<stdio.h>
main()
{
	int n,i,sum,m,rev;
	printf("enter number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rev=n%10;
		sum=sum+(rev*rev*rev);
		n=n/10;
	}
	if(m==sum)
	{
		printf("number is armstrong\n");
		
	}else
	{
		printf("number not armstrong\n");
	}
}
