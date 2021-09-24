#include<stdio.h>
main()
{
	int i,n,a[10];
	printf("enter numbe\n");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%7;
		n=n/7;
		
	}
	printf("octal number\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
