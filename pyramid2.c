#include<stdio.h>
main(){
	int i,j,n;
	printf("enter no of rows\n");
	scanf("%d",&n);
	for ( i = n; i >=1; --i)
	{
		for (j= i; j>=1; --j)
		{
			printf("*");
		}
		printf("\n");
	}
}
