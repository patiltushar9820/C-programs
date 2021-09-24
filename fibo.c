#include<stdio.h>
main()
{
	int i,a=1,b=1,n,a1=0,c;
	printf("enter number\n");
	scanf("%d",&n);
	
	printf ("%d %d",a,b);
	for(i=0;i<n-2;i++)
	{
		a1=a+b;
		printf(" %d",a1);
		a=b;
		b=a1;
	}
}
