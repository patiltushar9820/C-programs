#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200];
	int len=0,temp=0,i;
	printf("enter string\n");
	gets(str1);
	len=strlen(str1);
	for (i = 0; i < len; ++i)
	{
		if (str1[i]!=str1[len-i-1])
		{
			temp=1;
			break;
		}
	}
	if (temp==0)
	{
		printf("string pallindrome\n");
	}
	else{
		printf("string not pallindrome\n");
	}

	return 0;
}
