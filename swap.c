#include<stdio.h>
main(){
	int x,y;
	printf("enter two number x and y resp.\n");
	scanf("%d%d",&x,&y);
	printf("Before X=%d\nY=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After X=%d\nY=%d",x,y);
}
