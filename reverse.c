#include<stdio.h>
main()
{
	int n,sum=0,rev,m;
	printf("enter number\n");
	
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rev=n%10;
		sum=(sum*10)+rev;
		n=n/10;
		
	}
	printf("Reverce of %d is =%d",m,sum);
}
