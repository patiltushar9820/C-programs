#include<stdio.h>
main()
{
	int fact=1,n,i;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of number is =%d",fact);
}
