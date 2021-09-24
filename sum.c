#include<stdio.h>
main()
{
	int n,sum=0,mod;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0){
		mod=n%10;
		sum=sum+mod;
		n=n/10;
	}
	printf("sum=%d",sum);
}
