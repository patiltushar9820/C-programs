#include<stdio.h>
#include<string.h>
int main()
{
	char strrev1[100],str1[100];
	printf("enter string\n");
	gets(str1);
	
	printf("String :%s\n",str1);
	printf("reverse string :%s\n", strrev(str1));
	return 0;
}
