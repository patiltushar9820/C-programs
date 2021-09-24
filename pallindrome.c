#include<stdio.h>
main(){
	int n,rev,sum=0,m;
	printf("enter number\n");
	scanf("%d",&n);
	m=n;
	if(n==0){
		printf("invalid number\n");
		
	}else 
	{
		while(n>0)
		{
			rev=n%10;
			sum=(sum*10)+rev;
			n=n/10;
		}
		if(m==sum)
		{
			printf("number is pallindrome\n");
		}
		else
		{
			printf("number is not pallindrome \n");
		}
	}
}
