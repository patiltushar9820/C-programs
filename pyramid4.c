#include<stdio.h>
main(){
	int i,j,k,n;
	printf("enter no of rows\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for (j = i; j<=n ; j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
}